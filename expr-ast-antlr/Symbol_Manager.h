// #include "ast.h"
#include <iostream>
#include <map> 
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
class Symbol_Manager : public ASTVisitor{
public:
    map<string,string> symbols;
    vector<string> error_report;
    virtual union AnyType* visit(startnode& node, union AnyType& argument)
    {
        //cout<<"This is a startnode node"<<endl;
        for(auto interm : node.intermediatelist)
        {
            if( interm != nullptr)
                interm->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(intermediate& node, union AnyType& argument)
    {
        //cout<<"This is a intermediate node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(paramlist& node, union AnyType& argument)
    {
        //cout<<"This is a paramlist node"<<endl;
        //cout<<"Data type is "<<node.datatype<<endl;
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
        //cout<<"This is a localparamlist node"<<endl;
        //cout<<"Data type is "<<node.datatype<<endl;
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
        //cout<<"This is a declaration node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(single_decl& node, union AnyType& argument)
    {
        //cout<<"This is a single_decl node"<<endl;
        string varname = node.name->name;
        string datatype = node.name->datatype;
        //cout<<"Name of var is "<<node.name->name<<" and datatype is "<<node.name->datatype<<endl;
        auto it = symbols.find(varname);
        if(it == symbols.end())
        {   
            symbols[varname] = datatype;
        }else{
            string error = "Duplicate variable " + varname + " found";
            error_report.push_back(error);
        }
        if(node.init == (exprnode*)nullptr)
        {
            //cout<<"It is not initializd"<<endl;
        }else{
            //cout<<"It is initialized "<<endl;
            node.init->accept(*this, argument);
            string initdt = node.init->getDatatype();
            cout<<"initdt = "<<initdt<<" datatype = "<<datatype<<endl;
            if(initdt != datatype)
            {
                string error = "Cannot assign " + initdt + " to " + datatype;
                error_report.push_back(error);
            }
        }
    }
    virtual union AnyType* visit(array_decl& node, union AnyType& argument)
    {
        //cout<<"This is a array_decl node"<<endl;
        //cout<<"Name of array is "<<node.name->name<<" and datatype is "<<node.name->datatype<<endl;
        string varname = node.name->name;
        string datatype = node.name->datatype;
        auto it = symbols.find(varname);
        if(it == symbols.end())
        {   
            symbols[varname] = datatype;
        }else{
            string error = "Duplicate variable " + varname + " found";
            error_report.push_back(error);
        }
        if(node.size2 == (exprnode*)nullptr)
        {
            //cout<<"It is 1d array"<<endl;
            node.size1->accept(*this, argument);
            string arraysize1 = node.size1->getDatatype();
            cout<<"arraysize1 = "<<arraysize1<<endl;
            if(arraysize1 != "int")
            {
                string error = "Array sizes can be integers only. Wrong size type given for " + varname;
                error_report.push_back(error);
            }
        }else{
            //cout<<"It is 2d array"<<endl;
            node.size1->accept(*this, argument);
            node.size2->accept(*this, argument);
            string arraysize1 = node.size1->getDatatype();
            cout<<"arraysize1 = "<<arraysize1<<endl;
            string arraysize2 = node.size1->getDatatype();
            cout<<"arraysize2 = "<<arraysize2<<endl;
            if((arraysize1 != "int") || (arraysize2 != "int"))
            {
                string error = "Array sizes can be integers only. Wrong size type given for " + varname;
                error_report.push_back(error);
            }
        }
    }
    virtual union AnyType* visit(fndefnode& node, union AnyType& argument)
    {
        //cout<<"This is a fndefnode node"<<endl;
        //cout<<"Return type "<<node.returntype<<endl;
        //cout<<"Fn name is "<<node.name->name<<endl;
        string fnname = node.name->name;
        string rettype = node.returntype;
        auto it = symbols.find(fnname);
        if(it == symbols.end())
        {   
            symbols[fnname] = rettype;
        }else{
            string error = "Duplicate variable " + fnname + " found";
            error_report.push_back(error);
        }
        //cout<<"Args start"<<endl;
        for(auto arg : node.func_args)
        {
            if(arg != nullptr)
                arg->accept(*this, argument);
        }
        //cout<<"Args end"<<endl;
        //cout<<"Body for "<<node.name->name<<" starts "<<endl;
        node.body->accept(*this, argument);
        //cout<<"Body for "<<node.name->name<<" ends "<<endl;
    }
    virtual union AnyType* visit(arg_declaration& node, union AnyType& argument)
    {
        //cout<<"This is a arg_declaration node"<<endl;
        //cout<<"Arg name "<<node.name->name<<endl;
        //cout<<"Arg type "<<node.datatype<<endl;
        string varname = node.name->name;
        string datatype = node.name->datatype;
        auto it = symbols.find(varname);
        if(it == symbols.end())
        {   
            symbols[varname] = datatype;
        }else{
            string error = "Duplicate variable " + varname + " found";
            error_report.push_back(error);
        }
    }
    virtual union AnyType* visit(stmntnode& node, union AnyType& argument)
    {
        //cout<<"This is a stmntnode node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(comp_stmnt& node, union AnyType& argument)
    {
        //cout<<"This is a comp_stmnt node"<<endl;
        for(auto i : node.stmnt)
        {
            if(i != nullptr)
                i->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(forloop& node, union AnyType& argument)
    {
        //cout<<"This is a forloop node"<<endl;
        //cout<<"inits begin"<<endl;
        node.plist->accept(*this, argument);
        //cout<<"inits end"<<endl;
        //cout<<"Test begin"<<endl;
        node.test->accept(*this, argument);
        string testdt = node.test->getDatatype();
        if(testdt != "bool")
        {
            string error = "Testing condition in for loop should be boolean only.";
            error_report.push_back(error);
        }
        //cout<<"Test ends"<<endl;
        //cout<<"inc dec begins "<<endl;
        node.incdec->accept(*this, argument);
        //cout<<"inc dec ends"<<endl;
        //cout<<"Loop body begins"<<endl;
        node.body->accept(*this, argument);
        //cout<<"Loop body ends"<<endl;
    }
    virtual union AnyType* visit(whileloop& node, union AnyType& argument)
    {
        //cout<<"This is a whileloop node"<<endl;
        //cout<<"test begins"<<endl;
        node.test->accept(*this, argument);
        string testdt = node.test->getDatatype();
        if(testdt != "bool")
        {
            string error = "Testing condition in while loop should be boolean only.";
            error_report.push_back(error);
        }
        //cout<<"test ends"<<endl;
        //cout<<"Body begins"<<endl;
        node.body->accept(*this, argument);
        //cout<<"Body ends"<<endl;
    }
    virtual union AnyType* visit(ifwoelse& node, union AnyType& argument)
    {
        //cout<<"This is a ifwoelse node"<<endl;
        //cout<<"test begins"<<endl;
        node.test->accept(*this, argument);
        string testdt = node.test->getDatatype();
        if(testdt != "bool")
        {
            string error = "Testing condition in if should be boolean only.";
            error_report.push_back(error);
        }
        //cout<<"test ends"<<endl;
        //cout<<"Body begins"<<endl;
        node.body->accept(*this, argument);
        //cout<<"Body ends"<<endl;
    }
    virtual union AnyType* visit(ifwithelse& node, union AnyType& argument)
    {
        //cout<<"This is a ifwithelse node"<<endl;
        //cout<<"test begins"<<endl;
        node.test->accept(*this, argument);
        string testdt = node.test->getDatatype();
        if(testdt != "bool")
        {
            string error = "Testing condition in if should be boolean only.";
            error_report.push_back(error);
        }
        //cout<<"test ends"<<endl;
        //cout<<"Body1 begins"<<endl;
        node.body1->accept(*this, argument);
        //cout<<"Body1 ends"<<endl;
        //cout<<"Body2 begins"<<endl;
        node.body2->accept(*this, argument);
        //cout<<"Body2 ends"<<endl;
    }
    virtual union AnyType* visit(returnstmnt& node, union AnyType& argument)
    {
        //cout<<"This is a returnstmnt node"<<endl;
        if(node.compute == (exprnode*)nullptr)
        {
            //cout<<"return nothing"<<endl;
        }else{
            //cout<<"computer and return"<<endl;
            node.compute->accept(*this, argument);
        }
    }
    virtual union AnyType* visit(breakstmnt& node, union AnyType& argument)
    {
        //cout<<"This is a breakstmnt node"<<endl;
    }
    virtual union AnyType* visit(contistmnt& node, union AnyType& argument)
    {
        //cout<<"This is a contistmnt node"<<endl;
    }
    virtual union AnyType* visit(exprnode& node, union AnyType& argument)
    {
        //cout<<"This is a exprnode node"<<endl;
        node.accept(*this, argument);
    }
    virtual union AnyType* visit(constant& node, union AnyType& argument)
    {
        //cout<<"This is a constant node"<<endl;
        //cout<<"constant is "<<node.value<<endl;
        //cout<<"constant type is "<<node.datatype<<endl;
    }
    virtual union AnyType* visit(idnode& node, union AnyType& argument)
    {
        //cout<<"This is a idnode node"<<endl;
        //cout<<"name of id "<<node.name<<endl;
        string varname = node.name;
        auto it = symbols.find(varname);
        if(it == symbols.end())
        {   
            string error = varname + " has not been declared";
            error_report.push_back(error);
        }else{
            node.datatype = symbols[varname];
        }
    }
    virtual union AnyType* visit(array1d& node, union AnyType& argument)
    {
        //cout<<"This is a array1d node name is "<<node.name<<endl;
    }
    virtual union AnyType* visit(array2d& node, union AnyType& argument)
    {
        //cout<<"This is a array2d node name is "<<node.name<<endl;
    }
    virtual union AnyType* visit(fncallnode& node, union AnyType& argument)
    {
        //cout<<"This is a fncallnode node"<<endl;
        //cout<<"name is "<<node.name->name<<endl;
        //cout<<"args begin"<<endl;
        for(auto i : node.arglist)
        {
            if(i != nullptr)
                i->accept(*this, argument);
        }
        //cout<<"args end"<<endl;
    }

    virtual union AnyType* visit(una_operator& node, union AnyType& argument)
    {
        //cout<<"This is a una_operator node"<<endl;
        //cout<<"type "<<node.operatr<<endl;
        //cout<<"op1 starts"<<endl;
        node.expr1->accept(*this, argument);
        node.setDatatype(node.expr1->getDatatype());
        if(node.operatr == "!")
        {
            if((node.getDatatype() != "int") && (node.getDatatype() != "bool"))
            {
                string error = "operation " + node.operatr + " is defined only for integer and boolean";
                error_report.push_back(error);
            }else{
                node.setDatatype(node.getDatatype());
            }
        }
        if(node.operatr == "-")
        {
            if(node.getDatatype() != "int")
            {
                string error = "operation " + node.operatr + " is defined only for integer";
                error_report.push_back(error);
            }else{
                node.setDatatype(node.getDatatype());
            }
        }
        //cout<<"op1 ends"<<endl;
    }
    virtual union AnyType* visit(bin_operator& node, union AnyType& argument)
    {
        //cout<<"This is a bin_operator node"<<endl;
        //cout<<"type "<<node.operatr<<endl;
        //cout<<"op1 starts"<<endl;
        node.left->accept(*this, argument);
        //cout<<"op1 ends"<<endl;
        //cout<<"op2 starts"<<endl;
        node.right->accept(*this, argument);
        string leftdt = node.left->getDatatype();
        string rightdt = node.right->getDatatype();
        cout<<"In binary operator "<<node.operatr<<endl;
        cout<<"left : "<<leftdt<<" right : "<<rightdt<<endl;
        string binoperatr = node.operatr;
        if((binoperatr == "+") || (binoperatr == "-") || (binoperatr == "*") || (binoperatr == "/"))
        {
            if((leftdt != "int") || (rightdt != "int"))
            {
                string error = "Both left and right should be integers to perform "+binoperatr;
                error += ". Observed types : left = " + leftdt + " and right = " + rightdt;
                error_report.push_back(error);
            }else{
                node.setDatatype("int");
            }
        }
        if((binoperatr == "<=") || (binoperatr == "<") || (binoperatr == ">=") || (binoperatr == ">") || (binoperatr == "==") || (binoperatr == "!="))
        {
            if((leftdt != rightdt))
            {
                string error = "Both left and right should be of same type to perform " + binoperatr;
                error += ". Observed types : left = " + leftdt + " and right = " + rightdt;
                error_report.push_back(error);
            }else{
                if((leftdt != "int") && (leftdt != "bool") && (leftdt != "char"))
                {
                    string error = "Both left and right should be integers or characters or boolean to perform "+binoperatr;
                    error += ". Observed types : left = " + leftdt + " and right = " + rightdt;
                    error_report.push_back(error);
                }else{
                    node.setDatatype("bool");
                }
            }
        }
        if((binoperatr == "and") || (binoperatr == "or"))
        {
            if((leftdt != rightdt))
            {
                string error = "Both left and right should be of same type to perform " + binoperatr;
                error += ". Observed types : left = " + leftdt + " and right = " + rightdt;
                error_report.push_back(error);
            }else{
                if(leftdt != "bool")
                {
                    string error = "Both left and right should be boolean to perform "+binoperatr;
                    error += ". Observed types : left = " + leftdt + " and right = " + rightdt;
                    error_report.push_back(error);
                }else{
                    node.setDatatype("bool");
                }
            }
        }
        if(binoperatr == "=")
        {
            if((leftdt != rightdt))
            {
                string error = "Both left and right should be of same type to perform " + binoperatr;
                error += ". Observed types : left = " + leftdt + " and right = " + rightdt;
                error_report.push_back(error);
            }else{
                node.setDatatype(leftdt);
            }
        }
        //cout<<"op2 ends"<<endl;
    }
    virtual union AnyType* visit(ter_operator& node, union AnyType& argument)
    {
        //cout<<"This is a ter_operator node"<<endl;
        //cout<<"op1 starts"<<endl;
        node.expr1->accept(*this, argument);
        //cout<<"op1 ends"<<endl;
        //cout<<"op2 starts"<<endl;
        node.expr2->accept(*this, argument);
        //cout<<"op2 ends"<<endl;
        //cout<<"op3 starts"<<endl;
        node.expr3->accept(*this, argument);
        //cout<<"op3 ends"<<endl;
    }
};