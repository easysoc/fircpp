;buildInfoPackage: chisel3, version: 3.2.4, scalaVersion: 2.12.10, sbtVersion: 1.3.2
circuit GCD : 
  module GCD : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip value1 : UInt<16>, flip value2 : UInt<16>, flip loadingValues : UInt<1>, outputGCD : UInt<16>, outputValid : UInt<1>}
    
    reg x : UInt, clock @[GCD.scala 21:15]
    reg y : UInt, clock @[GCD.scala 22:15]
    node _T = gt(x, y) @[GCD.scala 24:10]
    when _T : @[GCD.scala 24:15]
      node _T_1 = sub(x, y) @[GCD.scala 24:24]
      node _T_2 = tail(_T_1, 1) @[GCD.scala 24:24]
      x <= _T_2 @[GCD.scala 24:19]
      skip @[GCD.scala 24:15]
    else : @[GCD.scala 25:16]
      node _T_3 = sub(y, x) @[GCD.scala 25:25]
      node _T_4 = tail(_T_3, 1) @[GCD.scala 25:25]
      y <= _T_4 @[GCD.scala 25:20]
      skip @[GCD.scala 25:16]
    when io.loadingValues : @[GCD.scala 27:26]
      x <= io.value1 @[GCD.scala 28:7]
      y <= io.value2 @[GCD.scala 29:7]
      skip @[GCD.scala 27:26]
    io.outputGCD <= x @[GCD.scala 32:16]
    node _T_5 = eq(y, UInt<1>("h00")) @[GCD.scala 33:23]
    io.outputValid <= _T_5 @[GCD.scala 33:18]
    
