#include <string>
#include <vector>
using namespace std;

class ASTNode;
class startnode;
class intermediate;
class paramlist;
class localparamlist;
class declaration;
class single_decl;
class array_decl;
class fndefnode;
class arg_declaration;
class stmntnode;
class comp_stmnt;
class forloop;
class whileloop;
class ifwoelse;
class ifwithelse;
class returnstmnt;
class breakstmnt;
class contistmnt;
class comp_stmnt;
class exprnode;
class constant;
class idnode;
class array1d;
class array2d;
class fncallnode;
class una_operator;
class bin_operator;
class ter_operator;

union AnyType
{
    void *node;
    int n;
    char c;
};


class ASTVisitor{
public:
    virtual union AnyType* visit(startnode& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(intermediate& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(paramlist& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(localparamlist& node, union AnyType& argument)=0;
    virtual union AnyType* visit(declaration& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(single_decl& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(array_decl& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(fndefnode& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(arg_declaration& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(stmntnode& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(comp_stmnt& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(forloop& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(whileloop& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(ifwoelse& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(ifwithelse& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(returnstmnt& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(breakstmnt& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(contistmnt& node, union AnyType& argument)=0;
    virtual union AnyType* visit(exprnode& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(constant& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(idnode& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(array1d& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(array2d& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(fncallnode& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(una_operator& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(bin_operator& node, union AnyType& argument) = 0;
    virtual union AnyType* visit(ter_operator& node, union AnyType& argument) = 0;
};

class ASTNode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument) =0;    
};

class intermediate : public ASTNode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument) =0;
};

class stmntnode : public ASTNode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument) = 0;
};

class paramlist : public intermediate{
public:
    string datatype;
    vector<declaration*> pardec;
    paramlist(string _datatype, vector<declaration*> _pardec):datatype(_datatype),pardec(_pardec){}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class localparamlist : public stmntnode{
public:
    string datatype;
    vector<declaration*> pardec;
    localparamlist(string _datatype, vector<declaration*> _pardec):datatype(_datatype),pardec(_pardec){}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class declaration : public ASTNode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument) =0;
};

class single_decl : public declaration {
public:
    idnode* name;
    exprnode* init;
    single_decl(idnode* _name, exprnode* _init):name(_name), init(_init) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class array_decl : public declaration{
public:
    idnode* name;
    exprnode* size1 = (exprnode*)nullptr;
    exprnode* size2 = (exprnode*)nullptr;
    array_decl(idnode* _name, exprnode* _size1):name(_name),size1(_size1){}
    array_decl(idnode* _name, exprnode* _size1, exprnode* _size2):name(_name),size1(_size1),size2(_size2){}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};


class fndefnode : public intermediate{
public:
    string returntype;
    idnode* name;
    vector<arg_declaration*> func_args;
    comp_stmnt* body;
    fndefnode(string _returntype, idnode* _name, vector<arg_declaration*> _func_args, comp_stmnt* _body) : 
    returntype(_returntype), name(_name), func_args(_func_args), body(_body) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class arg_declaration : public ASTNode{
public:
    string datatype;
    idnode* name;
    arg_declaration(string _datatype, idnode* _name) : datatype(_datatype), name(_name) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class startnode : public ASTNode{
public:
    vector<intermediate*> intermediatelist;
    startnode(vector<intermediate*> _intermediatelist) : intermediatelist(_intermediatelist) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};


class forloop : public stmntnode{
public:
    localparamlist* plist;
    exprnode* test;
    exprnode* incdec;
    comp_stmnt* body;
    forloop(localparamlist* _plist,exprnode* _test,exprnode* _incdec,comp_stmnt* _body) :
    plist(_plist), test(_test), incdec(_incdec), body(_body) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class whileloop : public stmntnode{
public:
    exprnode* test;
    comp_stmnt* body;
    whileloop(exprnode* _test, comp_stmnt* _body) : test(_test), body(_body) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class ifwoelse : public stmntnode{
public:
    exprnode* test;
    comp_stmnt* body;
    ifwoelse(exprnode* _test, comp_stmnt* _body) : test(_test), body(_body) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class ifwithelse : public stmntnode{
public:
    exprnode* test;
    comp_stmnt* body1;
    comp_stmnt* body2;
    ifwithelse(exprnode* _test, comp_stmnt* _body1, comp_stmnt* _body2) : test(_test), body1(_body1), body2(_body2) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class returnstmnt : public stmntnode{
public:
    exprnode* compute = (exprnode*)nullptr;
    returnstmnt(){}
    returnstmnt(exprnode* _compute) : compute(_compute) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class breakstmnt : public stmntnode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class contistmnt : public stmntnode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class comp_stmnt : public stmntnode{
public:
    vector<stmntnode*> stmnt;
    comp_stmnt(vector<stmntnode*> _stmnt) : stmnt(_stmnt) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class exprnode : public stmntnode{
public:
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument) =0;
};


class constant : public exprnode{
public:
    string value;
    string rettype;
    constant(string _value, string _rettype) : value(_value),rettype(_rettype) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class idnode : public exprnode{
public:
    string name;
    string rettype;
    idnode(string _name) : name(_name) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class array1d : public exprnode{
public:
    string name;
    string rettype;
    array1d(string _name) : name(_name) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class array2d : public exprnode{
public:
    string name;
    string rettype;
    array2d(string _name) : name(_name) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class fncallnode : public exprnode{
public:
    idnode* name;
    string rettype;
    vector<exprnode*> arglist;
    fncallnode(idnode* _name, vector<exprnode*> _arglist):name(_name),arglist(_arglist) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};


class una_operator : public exprnode{
public:
    string operatr;
    exprnode* expr1;
    string rettype;
    una_operator(exprnode* _expr, string _operatr) : expr1(_expr), operatr(_operatr) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class bin_operator : public exprnode{
public:    
    string operatr;
    exprnode* left;
    exprnode* right;
    string rettype;
    bin_operator(exprnode *_left, exprnode *_right, string _operatr) : left(_left), right(_right), operatr(_operatr) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};

class ter_operator : public stmntnode{
public:
    exprnode* expr1;
    exprnode* expr2;
    exprnode* expr3;
    ter_operator(exprnode* _expr1, exprnode* _expr2, exprnode* _expr3) : expr1(_expr1), expr2(_expr2), expr3(_expr3) {}
    virtual union AnyType* accept(ASTVisitor& v, union AnyType& argument)
    {
        return v.visit(*this, argument);
    }
};
