#include <iostream>

#include "antlr4-runtime.h"
#include "ExprLexer.cpp"
#include "ExprParser.cpp"
#include "ExprBuildASTVisitor.h"

#include "PostfixVisitor.h"
using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;

    cout << "Processing input file " << argv[1] << endl;
    stream.open(argv[1]);
    
    ANTLRInputStream input(stream);

    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);    

    ExprParser::StartContext *ctx = parser.start();

    ExprVisitor *visitor = new ExprBuildASTVisitor();
    startnode *program_root = nullptr;
    // start *program_root = visitor->visitStart(ctx);
    program_root = (startnode*)visitor->visitStart(ctx);
    informationPrinter *pv = new informationPrinter();
    pv->visit(*program_root);
    cout<<endl<<endl<<endl;
    cout<<"Following errors were detected "<<endl<<endl;
    for(auto error : pv->errorreport)
    {
        cout<<error<<endl;
    }
    return 0;
}
