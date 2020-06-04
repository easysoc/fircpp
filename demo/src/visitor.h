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

        circuit->indent = ctx->INDENT()->getText();
        circuit->dedent = ctx->DEDENT()->getText();
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
            module         = new Module(visitInfo(ctx->info()), ctx->id()->getText());
            module->indent = ctx->INDENT()->getText();
            module->dedent = ctx->DEDENT()->getText();
        } else if (ctx->Key_extmodule()) {
            throw std::runtime_error("extmodule not support");
        }

        return module;
    }

    //    virtual antlrcpp::Any visitPort(FIRRTLParser::PortContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitDir(FIRRTLParser::DirContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitType(FIRRTLParser::TypeContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitField(FIRRTLParser::FieldContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitDefname(FIRRTLParser::DefnameContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitParameter(FIRRTLParser::ParameterContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitModuleBlock(FIRRTLParser::ModuleBlockContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitSimple_reset0(FIRRTLParser::Simple_reset0Context *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitSimple_reset(FIRRTLParser::Simple_resetContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitReset_block(FIRRTLParser::Reset_blockContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

    //    virtual antlrcpp::Any visitStmt(FIRRTLParser::StmtContext *ctx) override {
    //      return visitChildren(ctx);
    //    }

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
            info = new Info(ctx->getText());
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
};
}
#endif // VISITOR_H
