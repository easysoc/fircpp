#ifndef IR_H
#define IR_H

#include <memory>
#include <vector>
#include <sstream>

#include "InfInt.h"

namespace fircpp {
class FirrtlNode {
public:

    virtual std::string
    serialize() {
        return "";
    };

    // keep the original indentation and line breaks
    // used for serialization
    std::string indent  = "";
    std::string dedent  = "";
    std::string newline = "";
};

/// Info start
class Info : public FirrtlNode {
public:

    Info(std::string info = "") : info(info){ }

    std::string info;
};

class NoInfo : public Info {
public:

    NoInfo(){}
};

// we do not distinguish MultiInfo
// we do not use StringLit
class FileInfo : public Info {
public:

    FileInfo(std::string info = "") : Info(info){ }

    virtual std::string
    serialize() override
    {
        return info;
    }
};

/// Info end

/// Type start
class Width : public FirrtlNode {};
//class UnknownWidth : public Width {};

class IntWidth : public Width {
public:
    IntWidth(InfInt width)
        : width(width)
    {};

    InfInt width;

    virtual std::string
    serialize() override
    {
        return "<" + width.toString() + ">";
    }
};

/// Type
class Type : public FirrtlNode {};

class UnknownType : public Type {
public:
    virtual std::string
    serialize() override
    {
        return "?";
    }
};

class GroundType : public Type {
public:
    GroundType(Width *width)
        : width(std::unique_ptr<Width>(width))
    {};

    std::unique_ptr<Width> width;
};

class UIntType : public GroundType {
public:
    UIntType(Width *width)
        : GroundType(width)
    {};

    virtual std::string
    serialize() override
    {
        return "UInt" + width->serialize();
    }
};

class SIntType : public GroundType {
public:
    SIntType(Width *width)
        : GroundType(width)
    {};

    virtual std::string
    serialize() override
    {
        return "SInt" + width->serialize();
    }
};

class ClockType : public GroundType {
public:
    ClockType() : GroundType(new IntWidth(1)) {};

    virtual std::string
    serialize() override
    {
        return "Clock";
    }
};

//class ResetType : public GroundType {
//public:
//    ResetType() : GroundType(new IntWidth(1)) {};

//    virtual std::string
//    serialize() override
//    {
//        return "Reset";
//    }
//};
/// Type end

/// Port start

class Direction : public FirrtlNode { };
class Input : public Direction {
public:

    virtual std::string
    serialize() override
    {
        return "input";
    }
};

class Output : public Direction {
public:

    virtual std::string
    serialize() override
    {
        return "output";
    }
};

class Port : public FirrtlNode {
public:

    Port(Info * info, std::string name, Direction *direction,Type *type)
        : info(std::unique_ptr<Info>(info)), name(name),
          direction(std::unique_ptr<Direction>(direction)),
          type(std::unique_ptr<Type>(type))
    { }

    std::unique_ptr<Info> info;
    std::string name;
    std::unique_ptr<Direction> direction;
    std::unique_ptr<Type> type;

    virtual std::string
    serialize() override
    {
        std::stringstream ss;
        ss << direction->serialize() + " " + name + " : " + type->serialize() + info->serialize();
        return ss.str();
    }
};

/// Port end

/// PrimOp start

/// PrimOp end

/// Expression start

/// Expression end


/// Statement start
class Statement : public FirrtlNode {};
class EmptyStmt : public Statement {
public:
    virtual std::string
    serialize() override {
        return "skip";
    };
};

class TestStmt : public Statement {
public:
    TestStmt(std::string text):text(text) {

    }

    std::unique_ptr<Info> info;
    std::string text;

    virtual std::string
    serialize() override {
        return text;
    };
};

class Block : public Statement {
public:
    Block(std::vector<Statement *> stmts) {
        for (auto stmt : stmts) {
            this->stmts.push_back(std::unique_ptr<Statement>(stmt));
        }
    };

    // none newline stmt
    std::vector<std::unique_ptr<Statement>> stmts;

    virtual std::string
    serialize() override {
        std::stringstream ss;
        for (auto &stmt : stmts) {
            // indent dedent newline, there is only one has content
            // newline before a stmt
            ss << stmt->newline;
            ss << stmt->serialize() << stmt->indent << stmt->dedent;
        }
        return ss.str();
    };
};

/// Statement end

/// Module start

class DefModule : public FirrtlNode {
public:

    DefModule(Info * info, std::string name, std::vector<Port *> ports)
        : info(std::unique_ptr<Info>(info)), name(name)
    {
        for (auto port : ports) {
            this->ports.push_back(std::unique_ptr<Port>(port));
        }
    }

    std::unique_ptr<Info> info;
    std::string name;
    std::vector<std::unique_ptr<Port>> ports;

    std::string
    serializeHeader(std::string type)
    {
        std::stringstream ss;

        ss << type + " " + name + " :" + info->serialize() + indent;
        // doesn't need check if ports is empty
        for (auto &port: ports) {
            ss << port->serialize() << port->newline;
        }
        return ss.str();
    }
};

class Module : public DefModule {
public:

    Module(Info * info, std::string name, std::vector<Port *> ports, Statement *body)
        : DefModule(info, name, ports),body(std::unique_ptr<Statement>(body))
    { }

    std::unique_ptr<Statement> body;

    virtual std::string
    serialize() override
    {
        std::stringstream ss;

        ss << serializeHeader("module");
        if (body) ss << body->serialize();
        ss << dedent;
        return ss.str();
    }
};

/// Module end

class Circuit : public FirrtlNode {
public:

    Circuit(Info * info, std::vector<Module *> modules, std::string main)
        : info(std::unique_ptr<Info>(info)),
        name(main)
    {
        // we do not use std::vector<std::unique_ptr<Module>> modules as function parameter
        // modules(std::move(modules))

        for (auto module : modules) {
            this->modules.push_back(std::unique_ptr<Module>(module));
        }
    }

    std::unique_ptr<Info> info;
    std::vector<std::unique_ptr<Module>> modules;
    std::string name;

    virtual std::string
    serialize() override
    {
        std::stringstream ss;

        ss << "circuit " + name + " :" + info->serialize() + indent;

        for (auto &module : modules) {
            ss << module->serialize();
        }
        ss << dedent;
        return ss.str();
    }
};
}
#endif // IR_H
