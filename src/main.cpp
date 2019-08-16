#include <iostream>
#include "LuaLexer.h"
#include "LuaParser.h"
using namespace antlr4;
using namespace std;
int main(int argc, const char* argv[]) {
    const char* filepath = argv[1];
    std::ifstream ifs;
    ifs.open(filepath);
    ANTLRInputStream input(ifs);
    LuaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LuaParser parser(&tokens);
    LuaParser::ChunkContext* chunks = parser.chunk();
    if (parser.getNumberOfSyntaxErrors() > 0) {
        cout<<"lua file syntax error"<<endl;
        return 0;
    }
    for (auto t : tokens.getTokens()) {
        cout<<t->toString()<<endl;
    }
    for (int i = 0; i < chunks->children.size(); ++i) {
        auto child = chunks->children.at(i);
        cout<<child->toString()<<endl;
    }
    ifs.close();
    return 0;
}