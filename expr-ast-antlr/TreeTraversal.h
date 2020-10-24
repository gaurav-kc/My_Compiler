// #include "ast.h"
#include <iostream>
#include <set>
using namespace std;
/*
union AnyType
{
    string s;
    union AnyType& *node;
    int n;
    char c;
}AnyType;
*/
class TraversalPrinter : public ASTVisitor{
public:
    virtual union AnyType* visit(startnode& node, union AnyType& argument)
    {
        cout<<"This is a startnode node"<<endl;
        for(auto interm : node.intermediatelist)
        {
            if( interm != nullptr)
                interm->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(intermediate& node, union AnyType& argument)
    {
        cout<<"This is a intermediate node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(paramlist& node, union AnyType& argument)
    {
        cout<<"This is a paramlist node"<<endl;
        cout<<"Data type is "<<node.datatype<<endl;
        for(auto decs : node.pardec)
        {
            if( decs != nullptr)
            {
                decs->setDatatype(node.datatype);
                decs->accept(*this, argument);
            }
        }
    }
    virtual union AnyType* visit(localparamlist& node, union AnyType& argument)
    {
        cout<<"This is a localparamlist node"<<endl;
        cout<<"Data type is "<<node.datatype<<endl;
        for(auto decs : node.pardec)
        {
            if( decs != nullptr)
            {
                decs->setDatatype(node.datatype);
                decs->accept(*this, argument);
            }
        }
    }
    virtual union AnyType* visit(declaration& node, union AnyType& argument)
    {
        cout<<"This is a declaration node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(single_decl& node, union AnyType& argument)
    {
        cout<<"This is a single_decl node"<<endl;
        cout<<"Name of var is "<<node.name->name<<" and datatype is "<<node.name->datatype<<endl;
        if(node.init == (exprnode*)nullptr)
        {
            cout<<"It is not initializd"<<endl;
        }else{
            cout<<"It is initialized "<<endl;
            node.init->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(array_decl& node, union AnyType& argument)
    {
        cout<<"This is a array_decl node"<<endl;
        cout<<"Name of array is "<<node.name->name<<" and datatype is "<<node.name->datatype<<endl;
        if(node.size2 == (exprnode*)nullptr)
        {
            cout<<"It is 1d array"<<endl;
            node.size1->accept(*this, argument);
        }else{
            cout<<"It is 2d array"<<endl;
            node.size1->accept(*this, argument);
            node.size2->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(fndefnode& node, union AnyType& argument)
    {
        cout<<"This is a fndefnode node"<<endl;
        cout<<"Return type "<<node.returntype<<endl;
        cout<<"Fn name is "<<node.name->name<<endl;
        cout<<"Args start"<<endl;
        for(auto arg : node.func_args)
        {
            if(arg != nullptr)
                arg->accept(*this, argument);
        }
        cout<<"Args end"<<endl;
        cout<<"Body for "<<node.name->name<<" starts "<<endl;
        node.body->accept(*this, argument);
        cout<<"Body for "<<node.name->name<<" ends "<<endl;
    }
    virtual union AnyType* visit(arg_declaration& node, union AnyType& argument)
    {
        cout<<"This is a arg_declaration node"<<endl;
        cout<<"Arg name "<<node.name->name<<endl;
        cout<<"Arg type "<<node.datatype<<endl;
    }
    virtual union AnyType* visit(stmntnode& node, union AnyType& argument)
    {
        cout<<"This is a stmntnode node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(comp_stmnt& node, union AnyType& argument)
    {
        cout<<"This is a comp_stmnt node"<<endl;
        for(auto i : node.stmnt)
        {
            if(i != nullptr)
                i->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(forloop& node, union AnyType& argument)
    {
        cout<<"This is a forloop node"<<endl;
        cout<<"inits begin"<<endl;
        node.plist->accept(*this, argument);
        cout<<"inits end"<<endl;
        cout<<"Test begin"<<endl;
        node.test->accept(*this, argument);
        cout<<"Test ends"<<endl;
        cout<<"inc dec begins "<<endl;
        node.incdec->accept(*this, argument);
        cout<<"inc dec ends"<<endl;
        cout<<"Loop body begins"<<endl;
        node.body->accept(*this, argument);
        cout<<"Loop body ends"<<endl;
    }
    virtual union AnyType* visit(whileloop& node, union AnyType& argument)
    {
        cout<<"This is a whileloop node"<<endl;
        cout<<"test begins"<<endl;
        node.test->accept(*this, argument);
        cout<<"test ends"<<endl;
        cout<<"Body begins"<<endl;
        node.body->accept(*this, argument);
        cout<<"Body ends"<<endl;
    }
    virtual union AnyType* visit(ifwoelse& node, union AnyType& argument)
    {
        cout<<"This is a ifwoelse node"<<endl;
        cout<<"test begins"<<endl;
        node.test->accept(*this, argument);
        cout<<"test ends"<<endl;
        cout<<"Body begins"<<endl;
        node.body->accept(*this, argument);
        cout<<"Body ends"<<endl;
    }
    virtual union AnyType* visit(ifwithelse& node, union AnyType& argument)
    {
        cout<<"This is a ifwithelse node"<<endl;
        cout<<"test begins"<<endl;
        node.test->accept(*this, argument);
        cout<<"test ends"<<endl;
        cout<<"Body1 begins"<<endl;
        node.body1->accept(*this, argument);
        cout<<"Body1 ends"<<endl;
        cout<<"Body2 begins"<<endl;
        node.body2->accept(*this, argument);
        cout<<"Body2 ends"<<endl;
    }
    virtual union AnyType* visit(returnstmnt& node, union AnyType& argument)
    {
        cout<<"This is a returnstmnt node"<<endl;
        if(node.compute == (exprnode*)nullptr)
        {
            cout<<"return nothing"<<endl;
        }else{
            cout<<"computer and return"<<endl;
            node.compute->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(breakstmnt& node, union AnyType& argument)
    {
        cout<<"This is a breakstmnt node"<<endl;
    }
    virtual union AnyType* visit(contistmnt& node, union AnyType& argument)
    {
        cout<<"This is a contistmnt node"<<endl;
    }
    virtual union AnyType* visit(exprnode& node, union AnyType& argument)
    {
        cout<<"This is a exprnode node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(constant& node, union AnyType& argument)
    {
        cout<<"This is a constant node"<<endl;
        cout<<"constant is "<<node.value<<endl;
        cout<<"constant type is "<<node.datatype<<endl;
    }
    virtual union AnyType* visit(idnode& node, union AnyType& argument)
    {
        cout<<"This is a idnode node"<<endl;
        cout<<"name of id "<<node.name<<endl;
    }
    virtual union AnyType* visit(array1d& node, union AnyType& argument)
    {
        cout<<"This is a array1d node name is "<<node.name<<endl;
    }
    virtual union AnyType* visit(array2d& node, union AnyType& argument)
    {
        cout<<"This is a array2d node name is "<<node.name<<endl;
    }
    virtual union AnyType* visit(fncallnode& node, union AnyType& argument)
    {
        cout<<"This is a fncallnode node"<<endl;
        cout<<"name is "<<node.name->name<<endl;
        cout<<"args begin"<<endl;
        for(auto i : node.arglist)
        {
            if(i != nullptr)
                i->accept(*this, argument);
        }
        cout<<"args end"<<endl;
    }

    virtual union AnyType* visit(una_operator& node, union AnyType& argument)
    {
        cout<<"This is a una_operator node"<<endl;
        cout<<"type "<<node.operatr<<endl;
        cout<<"op1 starts"<<endl;
        node.expr1->accept(*this, argument);
        cout<<"op1 ends"<<endl;
    }
    virtual union AnyType* visit(bin_operator& node, union AnyType& argument)
    {
        cout<<"This is a bin_operator node"<<endl;
        cout<<"type "<<node.operatr<<endl;
        cout<<"op1 starts"<<endl;
        node.left->accept(*this, argument);
        cout<<"op1 ends"<<endl;
        cout<<"op2 starts"<<endl;
        node.right->accept(*this, argument);
        cout<<"op2 ends"<<endl;
    }
    virtual union AnyType* visit(ter_operator& node, union AnyType& argument)
    {
        cout<<"This is a ter_operator node"<<endl;
        cout<<"op1 starts"<<endl;
        node.expr1->accept(*this, argument);
        cout<<"op1 ends"<<endl;
        cout<<"op2 starts"<<endl;
        node.expr2->accept(*this, argument);
        cout<<"op2 ends"<<endl;
        cout<<"op3 starts"<<endl;
        node.expr3->accept(*this, argument);
        cout<<"op3 ends"<<endl;
    }
};