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
    LuaParser::ChunkContext* chunk = parser.chunk();
    if (parser.getNumberOfSyntaxErrors() > 0) {
        cout<<"lua file syntax error"<<endl;
        return 0;
    }
    for (auto t : tokens.getTokens()) {
        cout << "line:" <<t->getLine() << ":";
        cout << " s:" << t->getStartIndex();
        cout << "e:" << t->getStopIndex();
        cout << "   ";
        cout << t->getText()<<endl;
    }
    ifs.close();
    return 0;
}