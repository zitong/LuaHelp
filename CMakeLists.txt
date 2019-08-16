cmake_minimum_required(VERSION 3.14)
project(LuaHelp)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        ${PROJECT_SOURCE_DIR}/generated/
        ${PROJECT_SOURCE_DIR}/third_party/
        ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src
        ${PROJECT_SOURCE_DIR}/src/
)
set(src_dir
        ${PROJECT_SOURCE_DIR}/generated/LuaLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/LuaParser.cpp
        ${PROJECT_SOURCE_DIR}/generated/LuaVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/LuaBaseVisitor.cpp
 )
file(GLOB antlr4-cpp-src
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/atn/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/dfa/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/misc/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/support/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/tree/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/tree/pattern/*.cpp
    ${PROJECT_SOURCE_DIR}/third_party/antlr4-cpp-runtime-4.7.2/src/tree/xpath/*.cpp
)
add_library (antlr4-cpp-runtime ${antlr4-cpp-src})
add_executable(LuaHelp ${src_dir} src/main.cpp)
target_link_libraries(LuaHelp antlr4-cpp-runtime)