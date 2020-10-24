#include <iostream>
#include <cstdio>
#include "json.hpp"

#include "antlr4-runtime.h"
#include "ExprLexer.cpp"
#include "ExprParser.cpp"
#include "ExprBuildASTVisitor.h"
#include "TreeTraversal.h"
#include "JSONCreater.h"
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
    TraversalPrinter *tp = new TraversalPrinter();
    AnyType a;
    a.n = 5;
    tp->visit(*program_root,a);
    JSONCreater *js = new JSONCreater();
    AnyType anyt;
    json j;
    j = *(json*)js->visit(*program_root, anyt)->node;
    cout<<j<<flush<<endl;
    js->createfile(j);
    return 0;
}
