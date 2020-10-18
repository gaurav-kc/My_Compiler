// #include "ast.h"
#include <iostream>
#include <set>
using namespace std;
/*
class PostFixVisitor : public ASTvisitor
{
public:
    virtual void visit(ASTProg &node)
    {
        cout << "PostFixVisit traversal invoked" << endl;
        int i = 1;
        for (auto statement : node.statementList)
        {
            cout << "line " << i << " : ";
            statement->accept(*this);
            cout << endl;
            i = i + 1;
        }
    }

    virtual void visit(ASTStatExpr &node)
    {
        node.expr->accept(*this);
    }

    virtual void visit(ASTStatAssignExpr &node)
    {
        cout << node.id;
        node.expr->accept(*this);
        cout << " =";
    }

    virtual void visit(ASTExpr &node)
    {
        cout << "ASTExpr visit function" << endl;
    }

    virtual void visit(ASTExprBinary &node)
    {
        ASTExpr *left = node.getLeft();
        ASTExpr *right = node.getRight();

        left->accept(*this);
        right->accept(*this);
        cout << " " + node.getBin_operator();
    }

    virtual void visit(ASTExprTernary &node)
    {
        ASTExpr *first = node.getFirst();
        ASTExpr *second = node.getSecond();
        ASTExpr *third = node.getThird();

        first->accept(*this);
        second->accept(*this);
        third->accept(*this);

        // visit(node.getFirst());
        // visit(node.getSecond());
        // visit(node.getThird());
        cout << " ?:";
    }

    virtual void visit(ASTExprID &node)
    {
        cout << " " << node.getID();
    }

    virtual void visit(ASTExprINT &node)
    {
        cout << " " << node.getIntLit();
    }
};
*/

class informationPrinter : public ASTVisitor{
    set<string> var_names;
public:
    vector<string> errorreport;
    virtual void visit(startnode& node)
    {
        cout<<"This is a startnode node"<<endl;
        for(auto interm : node.intermediatelist)
        {
            interm->accept(*this);
        }
    }
    virtual void visit(intermediate& node)
    {
        cout<<"This is a intermediat node"<<endl;
        node.accept(*this);
    }
    virtual void visit(paramlist& node)
    {
        cout<<"This is a paramlist node"<<endl;
        cout<<"Data type is "<<node.datatype<<endl;
        for(auto decs : node.pardec)
        {
            decs->accept(*this);
        }
    }
    virtual void visit(localparamlist& node)
    {
        cout<<"This is a localparamlist node"<<endl;
        cout<<"Data type is "<<node.datatype<<endl;
        for(auto decs : node.pardec)
        {
            decs->accept(*this);
        }
    }
    virtual void visit(declaration& node)
    {
        cout<<"This is a declaration node"<<endl;
        node.accept(*this);
    }
    virtual void visit(single_decl& node)
    {
        cout<<"This is a single_decl node"<<endl;
        cout<<"Name of var is "<<node.name->name<<endl;
        auto it = var_names.find(node.name->name);
        if(it != var_names.end())
        {
            string message = "variable " + node.name->name + " is already declared ";
            errorreport.push_back(message);
        }
        var_names.insert(node.name->name);
        if(node.init == (exprnode*)nullptr)
        {
            cout<<"It is not initializd"<<endl;
        }else{
            node.init->accept(*this);
        }
    }
    virtual void visit(array_decl& node)
    {
        cout<<"This is a array_decl node"<<endl;
        cout<<"Name of array is "<<node.name->name<<endl;
        auto it = var_names.find(node.name->name);
        if(it != var_names.end())
        {
            string message = "variable " + node.name->name + " is already declared ";
            errorreport.push_back(message);
        }
        var_names.insert(node.name->name);
        if(node.size2 == (exprnode*)nullptr)
        {
            cout<<"It is 1d array"<<endl;
            node.size1->accept(*this);
        }else{
            cout<<"It is 2d array"<<endl;
            node.size1->accept(*this);
            node.size2->accept(*this);
        }
    }
    virtual void visit(fndefnode& node)
    {
        cout<<"This is a fndefnode node"<<endl;
        cout<<"Return type "<<node.returntype<<endl;
        cout<<"Fn name is "<<node.name->name<<endl;
        auto it = var_names.find(node.name->name);
        if(it != var_names.end())
        {
            string message = "function " + node.name->name + " is already declared ";
            errorreport.push_back(message);
        }
        var_names.insert(node.name->name);
        cout<<"Args start"<<endl;
        for(auto arg : node.func_args)
        {
            arg->accept(*this);
        }
        cout<<"Args end"<<endl;
        cout<<"Body for "<<node.name->name<<" starts "<<endl;
        node.body->accept(*this);
        cout<<"Body for "<<node.name->name<<" ends "<<endl;
    }
    virtual void visit(arg_declaration& node)
    {
        cout<<"This is a arg_declaration node"<<endl;
        auto it = var_names.find(node.name->name);
        if(it != var_names.end())
        {
            string message = "variable " + node.name->name + " is already declared ";
            errorreport.push_back(message);
        }
        var_names.insert(node.name->name);
        cout<<"Arg name "<<node.name->name<<endl;
        cout<<"Arg type "<<node.datatype<<endl;
    }
    virtual void visit(stmntnode& node)
    {
        cout<<"This is a stmntnode node"<<endl;
        node.accept(*this);
    }
    virtual void visit(comp_stmnt& node)
    {
        cout<<"This is a comp_stmnt node"<<endl;
        for(auto i : node.stmnt)
        {
            i->accept(*this);
        }
    }
    virtual void visit(forloop& node)
    {
        cout<<"This is a forloop node"<<endl;
        cout<<"inits begin"<<endl;
        node.plist->accept(*this);
        cout<<"inits end"<<endl;
        cout<<"Test begin"<<endl;
        node.test->accept(*this);
        cout<<"Test ends"<<endl;
        cout<<"inc dec begins "<<endl;
        node.incdec->accept(*this);
        cout<<"inc dec ends"<<endl;
        cout<<"Loop body begins"<<endl;
        node.body->accept(*this);
        cout<<"Loop body ends"<<endl;
    }
    virtual void visit(whileloop& node)
    {
        cout<<"This is a whileloop node"<<endl;
        cout<<"test begins"<<endl;
        node.test->accept(*this);
        cout<<"test ends"<<endl;
        cout<<"Body begins"<<endl;
        node.body->accept(*this);
        cout<<"Body ends"<<endl;
    }
    virtual void visit(ifwoelse& node)
    {
        cout<<"This is a ifwoelse node"<<endl;
        cout<<"test begins"<<endl;
        node.test->accept(*this);
        cout<<"test ends"<<endl;
        cout<<"Body begins"<<endl;
        node.body->accept(*this);
        cout<<"Body ends"<<endl;
    }
    virtual void visit(ifwithelse& node)
    {
        cout<<"This is a ifwithelse node"<<endl;
        cout<<"test begins"<<endl;
        node.test->accept(*this);
        cout<<"test ends"<<endl;
        cout<<"Body1 begins"<<endl;
        node.body1->accept(*this);
        cout<<"Body1 ends"<<endl;
        cout<<"Body2 begins"<<endl;
        node.body2->accept(*this);
        cout<<"Body2 ends"<<endl;
    }
    virtual void visit(returnstmnt& node)
    {
        cout<<"This is a returnstmnt node"<<endl;
        if(node.compute == (exprnode*)nullptr)
        {
            cout<<"return nothing"<<endl;
        }else{
            cout<<"computer and return"<<endl;
            node.compute->accept(*this);
        }
    }
    virtual void visit(breakstmnt& node)
    {
        cout<<"This is a breakstmnt node"<<endl;
    }
    virtual void visit(contistmnt& node)
    {
        cout<<"This is a contistmnt node"<<endl;
    }
    virtual void visit(exprnode& node)
    {
        cout<<"This is a exprnode node"<<endl;
        node.accept(*this);
    }
    virtual void visit(constant& node)
    {
        cout<<"This is a constant node"<<endl;
        cout<<"constant is "<<node.value<<endl;
    }
    virtual void visit(idnode& node)
    {
        cout<<"This is a idnode node"<<endl;
        cout<<"name of id "<<node.name<<endl;
        auto it = var_names.find(node.name);
        if(it == var_names.end())
        {
            string message = node.name + " has not been defined ";
            errorreport.push_back(message);
        }
    }
    virtual void visit(array1d& node)
    {
        cout<<"This is a array1d node name is "<<node.name<<endl;
    }
    virtual void visit(array2d& node)
    {
        cout<<"This is a array2d node name is "<<node.name<<endl;
    }
    virtual void visit(fncallnode& node)
    {
        cout<<"This is a fncallnode node"<<endl;
        cout<<"name is "<<node.name->name<<endl;
        cout<<"args begin"<<endl;
        for(auto i : node.arglist)
        {
            i->accept(*this);
        }
        cout<<"args end"<<endl;
    }

    virtual void visit(una_operator& node)
    {
        cout<<"This is a una_operator node"<<endl;
        cout<<"type "<<node.operatr<<endl;
        cout<<"op1 starts"<<endl;
        node.expr->accept(*this);
        cout<<"op1 ends"<<endl;
    }
    virtual void visit(bin_operator& node)
    {
        cout<<"This is a bin_operator node"<<endl;
        cout<<"type "<<node.operatr<<endl;
        cout<<"op1 starts"<<endl;
        node.left->accept(*this);
        cout<<"op1 ends"<<endl;
        cout<<"op2 starts"<<endl;
        node.right->accept(*this);
        cout<<"op2 ends"<<endl;
    }
    virtual void visit(ter_operator& node)
    {
        cout<<"This is a ter_operator node"<<endl;
        cout<<"op1 starts"<<endl;
        node.expr1->accept(*this);
        cout<<"op1 ends"<<endl;
        cout<<"op2 starts"<<endl;
        node.expr2->accept(*this);
        cout<<"op2 ends"<<endl;
        cout<<"op3 starts"<<endl;
        node.expr3->accept(*this);
        cout<<"op3 ends"<<endl;
    }
};