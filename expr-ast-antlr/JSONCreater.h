// #include "ast.h"
// #include "json.hpp"
#include <iostream>
#include <set>
#include <iomanip>
#include <fstream>
using namespace std;
using json = nlohmann::json;

class JSONCreater : public ASTVisitor{
public:
    virtual union AnyType* visit(startnode& node, union AnyType& argument)
    {
        cout<<"This is a startnode node"<<endl;
        json *j1 = new json;
        json *j2 = new json;
        for(auto interm : node.intermediatelist)
        {
            if(interm != nullptr)
                j2->push_back(*((json*)(interm->accept(*this, argument))->node));
        }
        (*j1)["start"] = *j2;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(intermediate& node, union AnyType& argument)
    {
        cout<<"This is a intermediate node"<<endl;
        json *j1 = new json;
        (*j1)["intermediate"] = *((json*)node.accept(*this, argument)->node);
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(paramlist& node, union AnyType& argument)
    {
        cout<<"This is a paramlist node"<<endl;
        cout<<"Data type is "<<node.datatype<<endl;
        json *j1 = new json;
        json *j2 = new json;
        for(auto decs : node.pardec)
        {
            if(decs != nullptr)
                j2->push_back(*((json*)(decs->accept(*this, argument))->node));
        }
        (*j1)["globallist"] = *j2;
        (*j1)["type"] = "global_paramlist";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(localparamlist& node, union AnyType& argument)
    {
        cout<<"This is a localparamlist node"<<endl;
        cout<<"Data type is "<<node.datatype<<endl;
        json *j1 = new json;
        json *j2 = new json;
        for(auto decs : node.pardec)
        {
            if( decs != nullptr)
                j2->push_back(*((json*)(decs->accept(*this, argument))->node));
        }
        (*j1)["locallist"] = *j2;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(declaration& node, union AnyType& argument)
    {
        cout<<"This is a declaration node"<<endl;
        json *j1 = new json;
        (*j1)["declarations"] = *((json*)node.accept(*this, argument)->node);
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(single_decl& node, union AnyType& argument)
    {
        cout<<"This is a single_decl node"<<endl;
        cout<<"Name of var is "<<node.name->name<<endl;
        json *j1 = new json;
        (*j1)["var_name"] = node.name->name;
        if(node.init == (exprnode*)nullptr)
        {
            cout<<"It is not initializd"<<endl;
            (*j1)["initialization"] = "NULL";
        }else{
            cout<<"It is initialized "<<endl;
            (*j1)["initialization"] = (*((json*)(node.init->accept(*this, argument))->node));
        }
        (*j1)["type"] = "single_declaration";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(array_decl& node, union AnyType& argument)
    {
        cout<<"This is a array_decl node"<<endl;
        cout<<"Name of array is "<<node.name->name<<endl;
        json *j1 = new json;
        (*j1)["array_name"] = node.name->name;
        if(node.size2 == (exprnode*)nullptr)
        {
            cout<<"It is 1d array"<<endl;
            (*j1)["1d_init1"] = (*((json*)(node.size1->accept(*this, argument))->node));
        }else{
            cout<<"It is 2d array"<<endl;
            (*j1)["2d_init1"] = (*((json*)(node.size1->accept(*this, argument))->node));
            (*j1)["2d_init2"] = (*((json*)(node.size2->accept(*this, argument))->node));
        }
        (*j1)["type"] = "array_declaration";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(fndefnode& node, union AnyType& argument)
    {
        cout<<"This is a fndefnode node"<<endl;
        cout<<"Return type "<<node.returntype<<endl;
        cout<<"Fn name is "<<node.name->name<<endl;
        cout<<"Args start"<<endl;
        json *j1 = new json;
        (*j1)["type"] = "function_definition";
        (*j1)["return_type"] = node.returntype;
        (*j1)["func_name"] = node.name->name;
        json *j2 = new json;
        for(auto arg : node.func_args)
        {
            if(arg != nullptr)
                j2->push_back(*((json*)(arg->accept(*this, argument))->node));
        }
        (*j1)["arg_list"] = *j2;
        cout<<"Args end"<<endl;
        cout<<"Body for "<<node.name->name<<" starts "<<endl;
        (*j1)["body"] = (*((json*)(node.body->accept(*this, argument))->node));
        cout<<"Body for "<<node.name->name<<" ends "<<endl;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(arg_declaration& node, union AnyType& argument)
    {
        cout<<"This is a arg_declaration node"<<endl;
        cout<<"Arg name "<<node.name->name<<endl;
        cout<<"Arg type "<<node.datatype<<endl;
        json *j1 = new json;
        (*j1)["arg_name"] = node.name->name;
        (*j1)["arg_type"] = node.datatype;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(stmntnode& node, union AnyType& argument)
    {
        cout<<"This is a stmntnode node"<<endl;
        json *j1 = new json;
        (*j1)["statement"] = *((json*)node.accept(*this, argument)->node);
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(comp_stmnt& node, union AnyType& argument)
    {
        cout<<"This is a comp_stmnt node"<<endl;
        json *j1 = new json;
        json *j2 = new json;
        for(auto i : node.stmnt)
        {
            if(i != nullptr)
                j2->push_back(*((json*)(i->accept(*this,argument)->node)));
        }
        (*j1)["type"] = "compound_statement";
        (*j1)["body"] = *j2;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(forloop& node, union AnyType& argument)
    {
        cout<<"This is a forloop node"<<endl;
        cout<<"inits begin"<<endl;
        json *j1 = new json;
        (*j1)["initialization"] = *((json*)(node.plist->accept(*this, argument)->node));
        cout<<"inits end"<<endl;
        cout<<"Test begin"<<endl;
        (*j1)["testing"] = *((json*)(node.test->accept(*this, argument)->node));
        cout<<"Test ends"<<endl;
        cout<<"inc dec begins "<<endl;
        (*j1)["change"] = *((json*)(node.incdec->accept(*this, argument)->node));
        cout<<"inc dec ends"<<endl;
        cout<<"Loop body begins"<<endl;
        (*j1)["body"] = *((json*)(node.body->accept(*this, argument)->node));
        cout<<"Loop body ends"<<endl;
        (*j1)["type"] = "for_loop";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(whileloop& node, union AnyType& argument)
    {
        cout<<"This is a whileloop node"<<endl;
        cout<<"test begins"<<endl;
        json *j1 = new json;
        (*j1)["testing"] = *((json*)(node.test->accept(*this, argument)->node));
        cout<<"test ends"<<endl;
        cout<<"Body begins"<<endl;
        (*j1)["body"] = *((json*)(node.body->accept(*this, argument)->node));
        cout<<"Body ends"<<endl;
        (*j1)["type"] = "while_loop";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(ifwoelse& node, union AnyType& argument)
    {
        cout<<"This is a ifwoelse node"<<endl;
        json *j1 = new json;
        cout<<"test begins"<<endl;
        (*j1)["testing"] = *((json*)(node.test->accept(*this, argument)->node));
        cout<<"test ends"<<endl;
        cout<<"Body begins"<<endl;
        (*j1)["body"] = *((json*)(node.body->accept(*this, argument)->node));
        cout<<"Body ends"<<endl;
        (*j1)["type"] = "if_without_else";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(ifwithelse& node, union AnyType& argument)
    {
        cout<<"This is a ifwithelse node"<<endl;
        json *j1 = new json;
        cout<<"test begins"<<endl;
        (*j1)["testing"] = *((json*)(node.test->accept(*this, argument)->node));
        cout<<"test ends"<<endl;
        cout<<"Body1 begins"<<endl;
        (*j1)["body1"] = *((json*)(node.body1->accept(*this, argument)->node));
        cout<<"Body1 ends"<<endl;
        cout<<"Body2 begins"<<endl;
        (*j1)["body2"] = *((json*)(node.body2->accept(*this, argument)->node));
        cout<<"Body2 ends"<<endl;
        (*j1)["type"] = "if_with_else";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(returnstmnt& node, union AnyType& argument)
    {
        cout<<"This is a returnstmnt node"<<endl;
        json *j1 = new json;
        if(node.compute == (exprnode*)nullptr)
        {
            cout<<"return nothing"<<endl;
            (*j1)["return"] = "NULL";
        }else{
            cout<<"computer and return"<<endl;
            (*j1)["return"] = *((json*)(node.compute->accept(*this, argument)->node));
        }
        (*j1)["type"] = "return";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(breakstmnt& node, union AnyType& argument)
    {
        cout<<"This is a breakstmnt node"<<endl;
        json *j1 = new json;
        (*j1)["type"] = "break";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(contistmnt& node, union AnyType& argument)
    {
        cout<<"This is a contistmnt node"<<endl;
        json *j1 = new json;
        (*j1)["type"] = "continue";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(exprnode& node, union AnyType& argument)
    {
        cout<<"This is a exprnode node"<<endl;
        json *j1 = new json;
        (*j1)["expression"] = *((json*)node.accept(*this, argument)->node);
        cout<<"Expression done "<<flush<<endl;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(constant& node, union AnyType& argument)
    {
        cout<<"This is a constant node"<<endl;
        cout<<"constant is "<<node.value<<endl;
        json *j1 = new json;
        (*j1)["value"] = node.value;
        (*j1)["type"] = "constant";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(idnode& node, union AnyType& argument)
    {
        cout<<"This is a idnode node"<<endl;
        cout<<"name of id "<<node.name<<endl;
        json *j1 = new json;
        (*j1)["idname"] = node.name;
        (*j1)["type"] = "identifer";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(array1d& node, union AnyType& argument)
    {
        cout<<"This is a array1d node name is "<<node.name<<endl;
        json *j1 = new json;
        (*j1)["name"] = node.name;
        (*j1)["type"] = "array_1d";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(array2d& node, union AnyType& argument)
    {
        cout<<"This is a array2d node name is "<<node.name<<endl;
        json *j1 = new json;
        (*j1)["name"] = node.name;
        (*j1)["type"] = "array_2d";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(fncallnode& node, union AnyType& argument)
    {
        cout<<"This is a fncallnode node"<<endl;
        cout<<"name is "<<node.name->name<<endl;
        cout<<"args begin"<<endl;
        json *j1 = new json;
        json *j2 = new json;
        for(auto i : node.arglist)
        {
            if( i != nullptr)
                j2->push_back(*((json*)(i->accept(*this,argument)->node)));
        }
        (*j1)["args"] = *j2;
        (*j1)["type"] = "func_call";
        cout<<"args end"<<endl;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }

    virtual union AnyType* visit(una_operator& node, union AnyType& argument)
    {
        cout<<"This is a una_operator node"<<endl;
        json *j1 = new json;
        cout<<"type "<<node.operatr<<endl;
        (*j1)["operator"] = node.operatr;
        cout<<"op1 starts"<<endl;
        (*j1)["value"] = *((json*)node.expr1->accept(*this, argument)->node);
        (*j1)["type"] = "unary_op";
        cout<<"op1 ends"<<endl;
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    virtual union AnyType* visit(bin_operator& node, union AnyType& argument)
    {
        cout<<"This is a bin_operator node"<<endl;
        json *j1 = new json;
        cout<<"type "<<node.operatr<<endl;
        (*j1)["operator"] = node.operatr;
        cout<<"op1 starts"<<endl;
        (*j1)["left_value"] = *((json*)node.left->accept(*this, argument)->node);
        cout<<"op1 ends"<<endl;
        cout<<"op2 starts"<<endl;
        (*j1)["right_value"] = *((json*)node.right->accept(*this, argument)->node);
        cout<<"op2 ends"<<endl;
        (*j1)["type"] = "binary_op";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        cout<<"hihihih"<<flush<<endl;
        return anyt;
    }
    virtual union AnyType* visit(ter_operator& node, union AnyType& argument)
    {
        cout<<"This is a ter_operator node"<<endl;
        json *j1 = new json;
        cout<<"op1 starts"<<endl;
        (*j1)["condition"] = *((json*)node.expr1->accept(*this, argument)->node);
        cout<<"op1 ends"<<endl;
        cout<<"op2 starts"<<endl;
        (*j1)["body1"] = *((json*)node.expr2->accept(*this, argument)->node);
        cout<<"op2 ends"<<endl;
        cout<<"op3 starts"<<endl;
        (*j1)["body2"] = *((json*)node.expr3->accept(*this, argument)->node);
        cout<<"op3 ends"<<endl;
        (*j1)["type"] = "ternary_op";
        AnyType *anyt = new AnyType;
        anyt->node = j1;
        return anyt;
    }
    void createfile (json j)
    {
        ofstream ofs("pretty.json");
        ofs << setw(4) << j << endl;
    }
};