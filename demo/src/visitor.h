#ifndef VISITOR_H
#define VISITOR_H

#include "FIRRTLBaseVisitor.h"
#include "FIRRTLParser.h"

#include "ir.h"

namespace fircpp {

class Visitor : public antlr4::tree::AbstractParseTreeVisitor
{
public:
    Visitor(FIRRTLParser * parser) : parser(parser){ };

    virtual antlrcpp::Any
    visit(antlr4::tree::ParseTree * tree) override
    {
        return visitCircuit(dynamic_cast<FIRRTLParser::CircuitContext *>(tree));
    }

    virtual Circuit *
    visitCircuit(FIRRTLParser::CircuitContext * ctx)
    {
        Circuit * circuit = new Circuit(visitInfo(ctx->info()), visitModules(ctx->module()), ctx->id()->getText());
        if (ctx->INDENT()) {
            circuit->indent = ctx->INDENT()->getText();
        }
        if (ctx->DEDENT()) {
            circuit->dedent = ctx->DEDENT()->getText();
        }
        return circuit;
    };

    virtual std::vector<Module *>
    visitModules(std::vector<FIRRTLParser::ModuleContext *> contexts)
    {
        std::vector<Module *> modules;

        for (auto ctx : contexts) {
            Module * module = visitModule(ctx);
            if (module) {
                modules.push_back(module);
            }
        }
        return modules;
    }

    virtual Module *
    visitModule(FIRRTLParser::ModuleContext * ctx)
    {
        Module * module = nullptr;

        if (ctx->Key_module()) {
            module = new Module(visitInfo(ctx->info()), ctx->id()->getText(),
                                visitPorts(ctx->port()), visitModuleBlock(ctx->moduleBlock()));
            if (ctx->INDENT()) {
                module->indent = ctx->INDENT()->getText();
            }
            if (ctx->DEDENT()) {
                module->dedent = ctx->DEDENT()->getText();
            }
        } else if (ctx->Key_extmodule()) {
            throw std::runtime_error("extmodule not support");
        }

        return module;
    }

    virtual std::vector<Port *>
    visitPorts(std::vector<FIRRTLParser::PortContext *> contexts)
    {
        std::vector<Port *> ports;

        for (auto ctx : contexts) {
            Port * port = visitPort(ctx);
            ports.push_back(port);
        }

        return ports;
    }

    virtual Port *
    visitPort(FIRRTLParser::PortContext * ctx)
    {
        // visitPorts ensure ctx != nullptr
        Port * port = new Port(visitInfo(ctx->info()),
            ctx->id()->getText(),
            visitDir(ctx->dir()),
            visitType(ctx->type()));
        if (ctx->NEWLINE()) {
            port->newline = ctx->NEWLINE()->getText();
        }

        return port;
    }

    virtual Direction *
    visitDir(FIRRTLParser::DirContext * ctx)
    {
        Direction * direction = nullptr;

        if (ctx->Key_input()) {
            direction = new Input();
        } else {
            direction = new Output();
        }
        return direction;
    }

    virtual Type *
    visitType(FIRRTLParser::TypeContext * ctx)
    {
        Type * type = nullptr;

        // we do not deal with UnknownWidth
        Width * width = nullptr;

        if (ctx->Key_UInt()) {
            type = new UIntType(getWidth(ctx->intLit().front()));
        } else if (ctx->Key_SInt()) {
            type = new SIntType(getWidth(ctx->intLit().front()));
        } else if (ctx->Key_Clock()) {
            type = new ClockType;
        } else {
            type = new UnknownType;
        }
        return type;
    }

    //    virtual antlrcpp::Any visitField(FIRRTLParser::FieldContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitDefname(FIRRTLParser::DefnameContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitParameter(FIRRTLParser::ParameterContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    virtual Block *visitModuleBlock(FIRRTLParser::ModuleBlockContext *ctx) {
        Block *moduleBlock = nullptr;

        if (ctx) {
            std::vector<Statement *> stmts;

            std::string nl = "";
            for(auto ctx: ctx->simple_stmt()) {
                // newline before a stmt
                if (ctx->NEWLINE()) {
                    nl = ctx->NEWLINE()->getText();
                } else if(ctx->stmt()) {
                    Statement *stmt = visitStmt(ctx->stmt());
                    stmt->newline = nl;
                    stmts.push_back(stmt);

                    nl = "";
                }
            }
            moduleBlock = new Block(stmts);
        }

        return moduleBlock;
    }

    //    virtual antlrcpp::Any visitSimple_reset0(FIRRTLParser::Simple_reset0Context *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitSimple_reset(FIRRTLParser::Simple_resetContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitReset_block(FIRRTLParser::Reset_blockContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

        virtual Statement *visitStmt(FIRRTLParser::StmtContext *ctx) {
          return new TestStmt(ctx->getText());
        }

    //    virtual antlrcpp::Any visitMemField(FIRRTLParser::MemFieldContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

//    virtual antlrcpp::Any visitSimple_stmt(FIRRTLParser::Simple_stmtContext *ctx) override {
//      return visitChildren(ctx);
//    }

    //    virtual antlrcpp::Any visitSuite(FIRRTLParser::SuiteContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitWhen(FIRRTLParser::WhenContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    virtual Info *
    visitInfo(FIRRTLParser::InfoContext * ctx)
    {
        Info * info;

        if (ctx != nullptr) {
            // we do not distinguish MultiInfo
            // we do not use StringLit
            info = new FileInfo(ctx->getText());
        } else {
            info = new NoInfo;
        }
        return info;
    }

    //    virtual antlrcpp::Any visitMdir(FIRRTLParser::MdirContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitRuw(FIRRTLParser::RuwContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitExp(FIRRTLParser::ExpContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitId(FIRRTLParser::IdContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitFieldId(FIRRTLParser::FieldIdContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitIntLit(FIRRTLParser::IntLitContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitLowerBound(FIRRTLParser::LowerBoundContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitUpperBound(FIRRTLParser::UpperBoundContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitBoundValue(FIRRTLParser::BoundValueContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitKeywordAsId(FIRRTLParser::KeywordAsIdContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitPrimop(FIRRTLParser::PrimopContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

private:
    FIRRTLParser * parser;

    Width *
    getWidth(FIRRTLParser::IntLitContext * n)
    {
        return new IntWidth(n->getText());
    }
};
}
#endif // VISITOR_H
