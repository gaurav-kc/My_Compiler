#include <iostream>
#include <cstdio>
#include "json.hpp"

#include "antlr4-runtime.h"
#include "ExprLexer.cpp"
#include "ExprParser.cpp"
#include "ExprBuildASTVisitor.h"
#include  "Symbol_Manager.h"
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
    AnyType a;
    a.n = -1;
    Symbol_Manager *sm = new Symbol_Manager();
    sm->visit(*program_root,a);
    int errorsize = sm->error_report.size();
    if(errorsize == 0)
    {
        // TraversalPrinter *tp = new TraversalPrinter();
        // tp->visit(*program_root,a);
        JSONCreater *js = new JSONCreater();
        json j;
        j = *(json*)js->visit(*program_root, a)->node;
        // cout<<j<<flush<<endl;        //this line is to print json in terminal
        js->createfile(j);
        cout<<"check output.json"<<endl;
    }else{
        cout<<"Errors detected"<<endl;
        for(auto it = sm->error_report.begin(); it != sm->error_report.end(); ++it)
        {
            cout<<*it<<endl;
        }
    }
    return 0;
}
