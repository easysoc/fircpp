# -*- mode:cmake -*-

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

file(GLOB demo_SRC "${PROJECT_SOURCE_DIR}/demo/src/*")

if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach(src_file ${demo_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${demo_SRC})

add_executable(fircpp
  ${demo_SRC}
  )

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(fircpp PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

target_link_libraries(fircpp fircpp_shared)
#target_link_libraries(demo fircpp_static)
