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

class ASTVisitor{
public:
    virtual void visit(startnode& node) = 0;
    virtual void visit(intermediate& node) = 0;
    virtual void visit(paramlist& node) = 0;
    virtual void visit(localparamlist& node)=0;
    virtual void visit(declaration& node) = 0;
    virtual void visit(single_decl& node) = 0;
    virtual void visit(array_decl& node) = 0;
    virtual void visit(fndefnode& node) = 0;
    virtual void visit(arg_declaration& node) = 0;
    virtual void visit(stmntnode& node) = 0;
    virtual void visit(comp_stmnt& node) = 0;
    virtual void visit(forloop& node) = 0;
    virtual void visit(whileloop& node) = 0;
    virtual void visit(ifwoelse& node) = 0;
    virtual void visit(ifwithelse& node) = 0;
    virtual void visit(returnstmnt& node) = 0;
    virtual void visit(breakstmnt& node) = 0;
    virtual void visit(contistmnt& node)=0;
    virtual void visit(exprnode& node) = 0;
    virtual void visit(constant& node) = 0;
    virtual void visit(idnode& node) = 0;
    virtual void visit(array1d& node) = 0;
    virtual void visit(array2d& node) = 0;
    virtual void visit(fncallnode& node) = 0;
    virtual void visit(una_operator& node) = 0;
    virtual void visit(bin_operator& node) = 0;
    virtual void visit(ter_operator& node) = 0;
};

class ASTNode{
public:
    virtual void accept(ASTVisitor& V) =0;    
};

class intermediate : public ASTNode{
public:
    virtual void accept(ASTVisitor& V) =0;
};

class stmntnode : public ASTNode{
public:
    virtual void accept(ASTVisitor& v) = 0;
};

class paramlist : public intermediate{
public:
    string datatype;
    vector<declaration*> pardec;
    paramlist(string _datatype, vector<declaration*> _pardec):datatype(_datatype),pardec(_pardec){}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class localparamlist : public stmntnode{
public:
    string datatype;
    vector<declaration*> pardec;
    localparamlist(string _datatype, vector<declaration*> _pardec):datatype(_datatype),pardec(_pardec){}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class declaration : public ASTNode{
public:
    virtual void accept(ASTVisitor& v) =0;
};

class single_decl : public declaration {
public:
    idnode* name;
    exprnode* init;
    single_decl(idnode* _name, exprnode* _init):name(_name), init(_init) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class array_decl : public declaration{
public:
    idnode* name;
    exprnode* size1 = (exprnode*)nullptr;
    exprnode* size2 = (exprnode*)nullptr;
    array_decl(idnode* _name, exprnode* _size1):name(_name),size1(_size1){}
    array_decl(idnode* _name, exprnode* _size1, exprnode* _size2):name(_name),size1(_size1),size2(_size2){}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
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
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class arg_declaration : public ASTNode{
public:
    string datatype;
    idnode* name;
    arg_declaration(string _datatype, idnode* _name) : datatype(_datatype), name(_name) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class startnode : public ASTNode{
public:
    vector<intermediate*> intermediatelist;
    startnode(vector<intermediate*> _intermediatelist) : intermediatelist(_intermediatelist) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
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
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class whileloop : public stmntnode{
public:
    exprnode* test;
    comp_stmnt* body;
    whileloop(exprnode* _test, comp_stmnt* _body) : test(_test), body(_body) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class ifwoelse : public stmntnode{
public:
    exprnode* test;
    comp_stmnt* body;
    ifwoelse(exprnode* _test, comp_stmnt* _body) : test(_test), body(_body) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class ifwithelse : public stmntnode{
public:
    exprnode* test;
    comp_stmnt* body1;
    comp_stmnt* body2;
    ifwithelse(exprnode* _test, comp_stmnt* _body1, comp_stmnt* _body2) : test(_test), body1(_body1), body2(_body2) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class returnstmnt : public stmntnode{
public:
    exprnode* compute = (exprnode*)nullptr;
    returnstmnt(){}
    returnstmnt(exprnode* _compute) : compute(_compute) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class breakstmnt : public stmntnode{
public:
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class contistmnt : public stmntnode{
public:
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class comp_stmnt : public stmntnode{
public:
    vector<stmntnode*> stmnt;
    comp_stmnt(vector<stmntnode*> _stmnt) : stmnt(_stmnt) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class exprnode : public stmntnode{
public:
    virtual void accept(ASTVisitor& v) =0;
};


class constant : public exprnode{
public:
    string value;
    constant(string _value) : value(_value) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class idnode : public exprnode{
public:
    string name;
    idnode(string _name) : name(_name) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class array1d : public exprnode{
public:
    string name;
    array1d(string _name) : name(_name) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class array2d : public exprnode{
public:
    string name;
    array2d(string _name) : name(_name) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class fncallnode : public exprnode{
public:
    idnode* name;
    vector<exprnode*> arglist;
    fncallnode(idnode* _name, vector<exprnode*> _arglist):name(_name),arglist(_arglist) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};


class una_operator : public exprnode{
public:
    string operatr;
    exprnode* expr;
    una_operator(exprnode* _expr, string _operatr) : expr(_expr), operatr(_operatr) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class bin_operator : public exprnode{
public:    
    string operatr;
    exprnode* left;
    exprnode* right;
    bin_operator(exprnode *_left, exprnode *_right, string _operatr) : left(_left), right(_right), operatr(_operatr) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};

class ter_operator : public stmntnode{
public:
    exprnode* expr1;
    exprnode* expr2;
    exprnode* expr3;
    ter_operator(exprnode* _expr1, exprnode* _expr2, exprnode* _expr3) : expr1(_expr1), expr2(_expr2), expr3(_expr3) {}
    virtual void accept(ASTVisitor& v)
    {
        v.visit(*this);
    }
};
