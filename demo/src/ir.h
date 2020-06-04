#ifndef IR_H
#define IR_H

#include <memory>
#include <vector>
#include <sstream>

namespace fircpp {
class FirrtlNode {
public:

    virtual std::string
    serialize() = 0;

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

    virtual std::string
    serialize() override
    {
        return info;
    }
};

class NoInfo : public Info {
public:

    NoInfo(){ }

    virtual std::string
    serialize() override
    {
        return "";
    }
};

/// Info end

/// Type start
class Type : FirrtlNode {};
class GroundType : Type {

};
/// Type end

/// Port start

class Direction : FirrtlNode { };
class Input : Direction {
public:

    virtual std::string
    serialize() override
    {
        return "input";
    }
};

class Output : Direction {
public:

    virtual std::string
    serialize() override
    {
        return "output";
    }
};

class Port : FirrtlNode {
public:

    Port(Info * info, std::string name, Direction *direction){ }
};

/// Port end

/// Module start

class DefModule : public FirrtlNode {
public:

    DefModule(Info * info, std::string name)
        : info(std::unique_ptr<Info>(info)), name(name)
    { }

    std::unique_ptr<Info> info;
    std::string name;
};

class Module : public DefModule {
public:

    Module(Info * info, std::string name)
        : DefModule(info, name)
    { }

    virtual std::string
    serialize() override
    {
        std::stringstream ss;

        ss << "module " + name + " : " + indent;

        ss << dedent;
        return ss.str();
    }
};

/// Module end

class Circuit : public FirrtlNode {
public:

    Circuit(Info * info, std::vector<Module *> modules, std::string main)
        : info(std::unique_ptr<Info>(info)),
        modules(modules), name(main)
    { }

    std::unique_ptr<Info> info;
    std::vector<Module *> modules;
    std::string name;

    virtual std::string
    serialize() override
    {
        std::stringstream ss;

        ss << "circuit " + name + " : " + indent;

        for (auto module : modules) {
            ss << module->serialize();
        }
        ss << dedent;
        return ss.str();
    }
};
}
#endif // IR_H
