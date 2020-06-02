# -*- mode:cmake -*-

set(fircpp-PARSER_SRC
   ${PROJECT_SOURCE_DIR}/fircpp/parser/FIRRTLLexer.cpp
   ${PROJECT_SOURCE_DIR}/fircpp/parser/FIRRTLParser.cpp
   ${PROJECT_SOURCE_DIR}/fircpp/parser/FIRRTLBaseListener.cpp
   ${PROJECT_SOURCE_DIR}/fircpp/parser/FIRRTLBaseVisitor.cpp
   ${PROJECT_SOURCE_DIR}/fircpp/parser/FIRRTLListener.cpp
   ${PROJECT_SOURCE_DIR}/fircpp/parser/FIRRTLVisitor.cpp
 )

add_custom_target(GenerateFirrtlParser DEPENDS ${fircpp-PARSER_SRC})
add_custom_command(OUTPUT ${fircpp-PARSER_SRC}
   COMMAND
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/fircpp/parser/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/fircpp/parser/ -package fircpp ${PROJECT_SOURCE_DIR}/fircpp/FIRRTL.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/fircpp/FIRRTL.g4
   )

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime/src
  ${PROJECT_SOURCE_DIR}/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/runtime/src/atn
  ${PROJECT_SOURCE_DIR}/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/runtime/src/tree
  ${PROJECT_SOURCE_DIR}/runtime/src/support
  ${PROJECT_SOURCE_DIR}/fircpp
  ${PROJECT_SOURCE_DIR}/fircpp/parser
  )

#file(GLOB fircpp_SRC "${PROJECT_SOURCE_DIR}/fircpp/parser/*")
set(libfircpp_SRC
  ${PROJECT_SOURCE_DIR}/fircpp/DenterHelper.cpp
  ${fircpp-PARSER_SRC}
  )


add_library(fircpp_shared SHARED ${libfircpp_SRC})
add_library(fircpp_static STATIC ${libfircpp_SRC})

target_link_libraries(fircpp_shared antlr4_shared)
target_link_libraries(fircpp_static antlr4_static)

add_dependencies(fircpp_shared GenerateFirrtlParser)
add_dependencies(fircpp_static GenerateFirrtlParser)

set(LIB_OUTPUT_DIR "${CMAKE_HOME_DIRECTORY}/dist") # put generated libraries here.
set_target_properties(fircpp_shared
                      PROPERTIES VERSION   0.1
                                 SOVERSION 0.1
                                 OUTPUT_NAME fircpp
                                 LIBRARY_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 # TODO: test in windows. DLL is treated as runtime.
                                 # see https://cmake.org/cmake/help/v3.0/prop_tgt/LIBRARY_OUTPUT_DIRECTORY.html
                                 RUNTIME_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}"
                       )

set_target_properties(fircpp_static
                     PROPERTIES VERSION   0.1
                                SOVERSION 0.1
                                OUTPUT_NAME "fircpp${static_lib_suffix}"
                                ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
                                COMPILE_FLAGS "${disabled_compile_warnings} ${extra_static_compile_flags}"
                      )

