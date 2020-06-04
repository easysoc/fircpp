fircpp is a C++ Firrtl parser based on antlr4.

It can read both high-level and low-level Firrtl file, convert the content to an abstract syntax tree (AST), which can be further processed. In order to traverse the AST, you need to be familiar with antlr4 and the automatically generated [Visitor](./fircpp/parser/FIRRTLVisitor.h) class. The official book [The Definitive ANTLR 4 Reference](http://pragprog.com/book/tpantlr2/the-definitive-antlr-4-reference) will be very helpful.

Currently, it do not support various transformations supported in the [Scala version of Firrtl](https://github.com/freechipsproject/firrtl). The main purpose of this repository is to parse the low-level Firrtl (LoFIRRTL), then build a fast firrtl execution engine or simulator.

> I am trying to migrate the Scala version of the [IR](https://github.com/freechipsproject/firrtl/tree/master/src/main/scala/firrtl/ir) representation to c++ , make it easier to traverse the circuit. but currently it will focus on the LoFIRRTL part, see branch [ir](https://github.com/easysoc/fircpp/tree/ir).

## Build

Download antlr4 from https://www.antlr.org/download/antlr-4.8-complete.jar

```
git clone https://github.com/easysoc/fircpp.git
cd fircpp

mkdir build
cd build
cmake -DANTLR_JAR_LOCATION=/path/to/antlr4 -DWITH_DEMO=True ..
make -j4
```

a simple demo

```
cd demo
./fircpp /path/to/firrtl
```

it read the firrtl file and print out its content with s-expression format (just ignore the `\n` symbol).