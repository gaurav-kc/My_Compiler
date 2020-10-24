#include <iostream>
#include "ast.h"
#include <vector>
#include "ExprVisitor.h"

using namespace std;

class ExprBuildASTVisitor : public ExprVisitor
{
public:
    /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitStart(ExprParser::StartContext *context)
    {
        // //cout<<"In visitStart"<<flush<<endl;
        vector<intermediate*> v = visit(context->interlist());
        startnode *s = new startnode(v);
        // //cout<<"Out visitStart vector size is "<<v.size()<<flush<<endl;
        return (startnode*)s;
    }

    virtual antlrcpp::Any visitInterlist_inter(ExprParser::Interlist_interContext *context)
    {
        ////cout<<"In visitInterlist_inter"<<flush<<endl;
        vector<intermediate*> v;
        intermediate* i = (intermediate*)visit(context->inter());
        v.push_back(i);
        ////cout<<"Out visitInterlist_inter"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitInterlist_interlist_inter(ExprParser::Interlist_interlist_interContext *context)
    {
        ////cout<<"In visitInterlist_interlist_inter"<<flush<<endl;
        vector<intermediate*> v = visit(context->interlist());
        v.push_back((intermediate*)visit(context->inter()));
        ////cout<<"Out visitInterlist_interlist_inter"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitInter_parameter_list(ExprParser::Inter_parameter_listContext *context)
    {
        ////cout<<"In visitInter_parameter_list"<<flush<<endl;
        paramlist *p = (paramlist*)visit(context->parameter_list());
        ////cout<<"Out visitInter_parameter_list"<<flush<<endl;
        return (intermediate*)p;
    }

    virtual antlrcpp::Any visitInter_funcdef(ExprParser::Inter_funcdefContext *context)
    {
        ////cout<<"In visitInter_funcdef"<<flush<<endl;
        fndefnode *fd = (fndefnode*)visit(context->func_def());
        ////cout<<"Out visitInter_funcdef"<<flush<<endl;
        return (intermediate*)fd;
    }

    virtual antlrcpp::Any visitExpression_NUMBER_tag(ExprParser::Expression_NUMBER_tagContext *context)
    {
        ////cout<<"In visitExpression_NUMBER_tag"<<flush<<endl;
        constant *c = new constant(context->NUMBER()->getText(),"int");
        ////cout<<"Out visitExpression_NUMBER_tag"<<flush<<endl;
        return (exprnode*)c;
    }

    virtual antlrcpp::Any visitExpression_array_tag(ExprParser::Expression_array_tagContext *context)
    {
        ////cout<<"In visitExpression_array_tag"<<flush<<endl;
        ////cout<<"Out visitExpression_array_tag"<<flush<<endl;
        return (exprnode*)visit(context->array());
    }

    virtual antlrcpp::Any visitExpression_binary_not_equal_tag(ExprParser::Expression_binary_not_equal_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_not_equal_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "!=";
        bin_operator *bin = new bin_operator(left,right,op);
        ////cout<<"Out visitExpression_binary_not_equal_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_logical_and_tag(ExprParser::Expression_binary_logical_and_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_logical_and_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "and";
        bin_operator *bin = new bin_operator(left,right,op);
        ////cout<<"Out visitExpression_binary_logical_and_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_add_tag(ExprParser::Expression_binary_add_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_add_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "+";
        bin_operator *bin = new bin_operator(left,right,op);
        ////cout<<"Out visitExpression_binary_add_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_less_tag(ExprParser::Expression_binary_less_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_less_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "<";
        bin_operator *bin = new bin_operator(left,right,op);
        ////cout<<"Out visitExpression_binary_less_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_assign_tag(ExprParser::Expression_binary_assign_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_assign_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "=";
        bin_operator *bin = new bin_operator(left,right,op);
        ////cout<<"Out visitExpression_binary_assign_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_STRING_LITERAL_tag(ExprParser::Expression_STRING_LITERAL_tagContext *context)
    {
        ////cout<<"In visitExpression_STRING_LITERAL_tag"<<flush<<endl;
        constant *c = new constant(context->STRING_LITERAL()->getText(),"string");
        ////cout<<"Out visitExpression_STRING_LITERAL_tag"<<flush<<endl;
        return (exprnode*)c;
    }

    virtual antlrcpp::Any visitExpression_binary_logical_or_tag(ExprParser::Expression_binary_logical_or_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_logical_or_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "or";
        bin_operator *bin = new bin_operator(left,right,op);
        ////cout<<"Out visitExpression_binary_logical_or_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_mul_tag(ExprParser::Expression_binary_mul_tagContext *context)
    {
        ////cout<<"In visitExpression_binary_mul_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "*";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_mul_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_div_tag(ExprParser::Expression_binary_div_tagContext *context)
    {
        //cout<<"In visitExpression_binary_div_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "/";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_div_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_great_tag(ExprParser::Expression_binary_great_tagContext *context)
    {
        //cout<<"In visitExpression_binary_great_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = ">";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_great_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_CHAR_tag(ExprParser::Expression_CHAR_tagContext *context)
    {
        //cout<<"In visitExpression_CHAR_tag"<<flush<<endl;
        constant *c = new constant(context->CHAR()->getText(),"char");
        //cout<<"Out visitExpression_CHAR_tag"<<flush<<endl;
        return (exprnode*)c;
    }

    virtual antlrcpp::Any visitExpression_unary_minus_tag(ExprParser::Expression_unary_minus_tagContext *context)
    {
        //cout<<"In visitExpression_unary_minus_tag"<<flush<<endl;
        exprnode *expr = (exprnode*)visit(context->expression());
        string op = "-";
        una_operator *un = new una_operator(expr,op);
        //cout<<"Out visitExpression_unary_minus_tag"<<flush<<endl;
        return (exprnode*)un;
    }

    virtual antlrcpp::Any visitExpression_binary_le_tag(ExprParser::Expression_binary_le_tagContext *context)
    {
        //cout<<"In visitExpression_binary_le_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "<=";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_le_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_ge_tag(ExprParser::Expression_binary_ge_tagContext *context)
    {
        //cout<<"In visitExpression_binary_ge_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = ">=";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_ge_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_binary_exactly_equal_tag(ExprParser::Expression_binary_exactly_equal_tagContext *context)
    {
        //cout<<"In visitExpression_binary_exactly_equal_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "==";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_exactly_equal_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_func_call_tag(ExprParser::Expression_func_call_tagContext *context)
    {
        //cout<<"In visitExpression_func_call_tag"<<flush<<endl;
        //cout<<"Out visitExpression_func_call_tag"<<flush<<endl;
        return (exprnode*)visit(context->func_call());
    }

    virtual antlrcpp::Any visitTernary_opr_tag(ExprParser::Ternary_opr_tagContext *context)
    {
        //cout<<"In visitExpression_ternary_tag"<<flush<<endl;
        exprnode *expr1 = (exprnode*)visit(context->expression(0));
        exprnode *expr2 = (exprnode*)visit(context->expression(1));
        exprnode *expr3 = (exprnode*)visit(context->expression(2));
        ter_operator *ter = new ter_operator(expr1, expr2, expr3);
        //cout<<"Out visitExpression_ternary_tag"<<flush<<endl;
        return (stmntnode*)ter;
    }

    virtual antlrcpp::Any visitExpression_brackets_expression_tag(ExprParser::Expression_brackets_expression_tagContext *context)
    {
        //cout<<"In visitExpression_brackets_expression_tag"<<flush<<endl;
        //cout<<"Out visitExpression_brackets_expression_tag"<<flush<<endl;
        return (exprnode*)visit(context->expression());
    }

    virtual antlrcpp::Any visitExpression_unary_excl_tag(ExprParser::Expression_unary_excl_tagContext *context)
    {
        //cout<<"In visitExpression_unary_excl_tag"<<flush<<endl;
        exprnode *expr = (exprnode*)visit(context->expression());
        string op = "!";
        una_operator *un = new una_operator(expr,op);
        //cout<<"Out visitExpression_unary_excl_tag"<<flush<<endl;
        return (exprnode*)un;
    }

    virtual antlrcpp::Any visitExpression_IDENTIFIER_tag(ExprParser::Expression_IDENTIFIER_tagContext *context)
    {
        //cout<<"In visitExpression_IDENTIFIER_tag"<<flush<<endl;
        idnode *id = new idnode(context->IDENTIFIER()->getText());
        //cout<<"Out visitExpression_IDENTIFIER_tag"<<flush<<endl;
        return (exprnode*)id;
    }

    virtual antlrcpp::Any visitExpression_binary_sub_tag(ExprParser::Expression_binary_sub_tagContext *context)
    {
        //cout<<"In visitExpression_binary_sub_tag"<<flush<<endl;
        exprnode *left = (exprnode*)visit(context->expression(0));
        exprnode *right = (exprnode*)visit(context->expression(1));
        string op = "-";
        bin_operator *bin = new bin_operator(left,right,op);
        //cout<<"Out visitExpression_binary_sub_tag"<<flush<<endl;
        return (exprnode*)bin;
    }

    virtual antlrcpp::Any visitExpression_stmnt_semicolon(ExprParser::Expression_stmnt_semicolonContext *context)
    {
        //cout<<"In visitExpression_stmnt_semicolon"<<flush<<endl;
        //cout<<"Out visitExpression_stmnt_semicolon"<<flush<<endl;
        return (exprnode*)nullptr;
    }

    virtual antlrcpp::Any visitExpression_stmnt_expression(ExprParser::Expression_stmnt_expressionContext *context)
    {
        //cout<<"In visitExpression_stmnt_expression"<<flush<<endl;
        //cout<<"Out visitExpression_stmnt_expression"<<flush<<endl;
        return (exprnode*)visit(context->expression());
    }

    virtual antlrcpp::Any visitSelection_stmnt_if_wo_else(ExprParser::Selection_stmnt_if_wo_elseContext *context)
    {
        //cout<<"In visitSelection_stmnt_if_wo_else"<<flush<<endl;
        exprnode *expr = (exprnode*)visit(context->expression());
        comp_stmnt *cmp_s = (comp_stmnt*)visit(context->compound_stmnt());
        ifwoelse *ifelse = new ifwoelse(expr, cmp_s);
        //cout<<"Out visitSelection_stmnt_if_wo_else"<<flush<<endl;
        return (stmntnode*)ifelse;
    }

    virtual antlrcpp::Any visitSelection_stmnt_if_w_else(ExprParser::Selection_stmnt_if_w_elseContext *context)
    {
        //cout<<"In visitSelection_stmnt_if_w_else"<<flush<<endl;
        exprnode *expr = (exprnode*)visit(context->expression());
        comp_stmnt *cmp_s1 = (comp_stmnt*)visit(context->compound_stmnt(0));
        comp_stmnt *cmp_s2 = (comp_stmnt*)visit(context->compound_stmnt(1));
        ifwithelse *ifelse = new ifwithelse(expr, cmp_s1, cmp_s2);
        //cout<<"Out visitSelection_stmnt_if_w_else"<<flush<<endl;
        return (stmntnode*)ifelse;
    }

    virtual antlrcpp::Any visitIterative_stmnnt_while(ExprParser::Iterative_stmnnt_whileContext *context)
    {
        //cout<<"In visitIterative_stmnnt_while"<<flush<<endl;
        exprnode *expr = (exprnode*)visit(context->expression());
        comp_stmnt *cmp_s = (comp_stmnt*)visit(context->compound_stmnt());
        whileloop *wh = new whileloop(expr, cmp_s);
        //cout<<"Out visitIterative_stmnnt_while"<<flush<<endl;
        return (stmntnode*)wh;
    }

    virtual antlrcpp::Any visitIterative_stmnnt_for(ExprParser::Iterative_stmnnt_forContext *context)
    {
        //cout<<"In visitIterative_stmnnt_for"<<flush<<endl;
        localparamlist* plist = (localparamlist*)visit(context->local_param_list());
        exprnode* test = (exprnode*)visit(context->expression_stmnt());
        exprnode* incdec = (exprnode*)visit(context->expression());
        comp_stmnt* body = (comp_stmnt*)visit(context->compound_stmnt());
        forloop *fr = new forloop(plist, test, incdec, body);
        //cout<<"Out visitIterative_stmnnt_for"<<flush<<endl;
        return (stmntnode*)fr;
    }

    virtual antlrcpp::Any visitJump_stmnt_continue(ExprParser::Jump_stmnt_continueContext *context)
    {
        //cout<<"In visitJump_stmnt_continue"<<flush<<endl;
        contistmnt *cs = new contistmnt();
        //cout<<"Out visitJump_stmnt_continue"<<flush<<endl;
        return (stmntnode*)cs;
    }

    virtual antlrcpp::Any visitJump_stmnt_break(ExprParser::Jump_stmnt_breakContext *context)
    {
        //cout<<"In visitJump_stmnt_break"<<flush<<endl;
        breakstmnt *bs = new breakstmnt();
        //cout<<"Out visitJump_stmnt_break"<<flush<<endl;
        return (stmntnode*)bs;
    }

    virtual antlrcpp::Any visitJump_stmnt_return(ExprParser::Jump_stmnt_returnContext *context)
    {
        //cout<<"In visitJump_stmnt_return"<<flush<<endl;
        returnstmnt *rs = new returnstmnt();
        //cout<<"Out visitJump_stmnt_return"<<flush<<endl;
        return (stmntnode*)rs;
    }

    virtual antlrcpp::Any visitStatement_list_statement(ExprParser::Statement_list_statementContext *context)
    {
        //cout<<"In visitStatement_list_statement"<<flush<<endl;
        vector<stmntnode*> v;
        v.push_back((stmntnode*)visit(context->statement()));
        //cout<<"Out visitStatement_list_statement"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitStatement_list_list_stmnt(ExprParser::Statement_list_list_stmntContext *context)
    {
        //cout<<"In visitStatement_list_list_stmnt"<<flush<<endl;
        vector<stmntnode*> v = visit(context->statement_list());
        v.push_back((stmntnode*)visit(context->statement()));
        //cout<<"Out visitStatement_list_list_stmnt"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitDatatype_int(ExprParser::Datatype_intContext *context)
    {
        //cout<<"In visitDatatype_int"<<flush<<endl;
        //cout<<"Out visitDatatype_int"<<flush<<endl;
        string s = "int";
        return s;
    }

    virtual antlrcpp::Any visitDatatype_uint(ExprParser::Datatype_uintContext *context)
    {
        //cout<<"In visitDatatype_uint"<<flush<<endl;
        //cout<<"Out visitDatatype_uint"<<flush<<endl;
        string s = "int";
        return s;
    }

    virtual antlrcpp::Any visitDatatype_char(ExprParser::Datatype_charContext *context)
    {
        //cout<<"In visitDatatype_char"<<flush<<endl;
        //cout<<"Out visitDatatype_char"<<flush<<endl;
        string s = "char";
        return s;
    }

    virtual antlrcpp::Any visitDatatype_bool(ExprParser::Datatype_boolContext *context)
    {
        //cout<<"In visitDatatype_bool"<<flush<<endl;
        //cout<<"Out visitDatatype_bool"<<flush<<endl;
        string s = "bool";
        return s;
    }

    virtual antlrcpp::Any visitDatatype_void(ExprParser::Datatype_voidContext *context)
    {
        //cout<<"In visitDatatype_void"<<flush<<endl;
        //cout<<"Out visitDatatype_void"<<flush<<endl;
        string s = "void";
        return s;
    }

    virtual antlrcpp::Any visitArray_1d(ExprParser::Array_1dContext *context)
    {
        //cout<<"In visitArray_1d"<<flush<<endl;
        string name = context->IDENTIFIER()->getText();
        array1d *a1d = new array1d(name);
        //cout<<"Out visitArray_1d"<<flush<<endl;
        return (exprnode*)a1d;
    }

    virtual antlrcpp::Any visitArray_2d(ExprParser::Array_2dContext *context)
    {
        //cout<<"In visitArray_2d"<<flush<<endl;
        string name = context->IDENTIFIER()->getText();
        array2d *a2d = new array2d(name);
        //cout<<"Out visitArray_2d"<<flush<<endl;
        return (exprnode*)a2d;
    }

    virtual antlrcpp::Any visitArg_decl_dtID(ExprParser::Arg_decl_dtIDContext *context)
    {
        //cout<<"In visitArg_decl_dtID"<<flush<<endl;
        string datatype = visit(context->datatype());
        string name = context->IDENTIFIER()->getText();
        idnode *id = new idnode(name,datatype);
        arg_declaration *ad = new arg_declaration(datatype, id);
        //cout<<"Out visitArg_decl_dtID"<<flush<<endl;
        return (arg_declaration*)ad;
    }

    virtual antlrcpp::Any visitArg_decl_empty(ExprParser::Arg_decl_emptyContext *context)
    {
        //cout<<"In visitArg_decl_empty"<<flush<<endl;
        //cout<<"Out visitArg_decl_empty"<<flush<<endl;
        return (arg_declaration*)nullptr;
    }

    virtual antlrcpp::Any visitInitialization_expr(ExprParser::Initialization_exprContext *context)
    {
        //cout<<"In visitInitialization_expr"<<flush<<endl;
        //cout<<"Out visitInitialization_expr"<<flush<<endl;
        return (exprnode*)visit(context->expression());
    }

    virtual antlrcpp::Any visitDeclinfo_id(ExprParser::Declinfo_idContext *context)
    {
        //cout<<"In visitDeclinfo_id"<<flush<<endl;
        string varname = context->IDENTIFIER()->getText();
        idnode *id = new idnode(varname);
        single_decl *sd = new single_decl(id,(exprnode*)nullptr);
        //cout<<"Out visitDeclinfo_id"<<flush<<endl;
        return (declaration*)sd;
    }

    virtual antlrcpp::Any visitDeclinfo_id_init(ExprParser::Declinfo_id_initContext *context)
    {
        //cout<<"In visitDeclinfo_id_init"<<flush<<endl;
        string varname = context->IDENTIFIER()->getText();
        idnode *id = new idnode(varname);
        exprnode *expr = (exprnode*)visit(context->initialization());
        single_decl *sd = new single_decl(id, expr);
        //cout<<"Out visitDeclinfo_id_init"<<flush<<endl;
        return (declaration*)sd;
    }

    virtual antlrcpp::Any visitDeclinfo_array_1d(ExprParser::Declinfo_array_1dContext *context)
    {
        //cout<<"In visitDeclinfo_array_1d"<<flush<<endl;
        string name = context->IDENTIFIER()->getText();
        idnode *id = new idnode(name);
        exprnode *expr = (exprnode*)visit(context->expression());
        array_decl *ad = new array_decl(id,expr);
        //cout<<"Out visitDeclinfo_array_1d"<<flush<<endl;
        return (declaration*)ad;
    }

    virtual antlrcpp::Any visitDeclinfo_array_2d(ExprParser::Declinfo_array_2dContext *context)
    {
        //cout<<"In visitDeclinfo_array_2d"<<flush<<endl;
        string name = context->IDENTIFIER()->getText();
        idnode *id = new idnode(name);
        exprnode *expr1 = (exprnode*)visit(context->expression(0));
        exprnode *expr2 = (exprnode*)visit(context->expression(1));
        array_decl *ad = new array_decl(id,expr1,expr2);
        //cout<<"Out visitDeclinfo_array_2d"<<flush<<endl;
        return (declaration*)ad;
    }

    virtual antlrcpp::Any visitDeclist_list_info(ExprParser::Declist_list_infoContext *context)
    {
        //cout<<"In visitDeclist_list_info"<<flush<<endl;
        vector<declaration*> v = visit(context->declist());
        v.push_back((declaration*)visit(context->declinfo()));
        //cout<<"Out visitDeclist_list_info"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitDeclist_declinfo(ExprParser::Declist_declinfoContext *context)
    {
        //cout<<"In visitDeclist_declinfo"<<flush<<endl;
        vector<declaration*> v;
        v.push_back((declaration*)visit(context->declinfo()));
        //cout<<"Out visitDeclist_declinfo"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitParameter_decl_data_expression(ExprParser::Parameter_decl_data_expressionContext *context)
    {
        //cout<<"In visitParameter_decl_data_expression"<<flush<<endl;
        string datatype = visit(context->datatype());
        vector<declaration*> dec = visit(context->declist());
        paramlist *p = new paramlist(datatype, dec);
        //cout<<"Out visitParameter_decl_data_expression"<<flush<<endl;
        return (paramlist*)p;
    }

    virtual antlrcpp::Any visitLocal_param_list_data_list(ExprParser::Local_param_list_data_listContext *context)
    {
        //cout<<"In visitLocal_param_list_data_list"<<flush<<endl;
        string datatype = visit(context->datatype());
        vector<declaration*> dec = visit(context->declist());
        localparamlist *p = new localparamlist(datatype, dec);
        //cout<<"Out visitLocal_param_list_data_list"<<flush<<endl;
        return (localparamlist*)p;
    }

    virtual antlrcpp::Any visitFunction_args_argdecl(ExprParser::Function_args_argdeclContext *context)
    {
        //cout<<"In visitFunction_args_argdecl"<<flush<<endl;
        vector<arg_declaration*> v;
        v.push_back((arg_declaration*)visit(context->arg_decl()));
        //cout<<"Out visitFunction_args_argdecl"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitFunction_args_args_argdecl(ExprParser::Function_args_args_argdeclContext *context)
    {
        //cout<<"In visitFunction_args_args_argdecl"<<flush<<endl;
        vector<arg_declaration*> v = visit(context->function_args());
        v.push_back((arg_declaration*)visit(context->arg_decl()));
        //cout<<"Out visitFunction_args_args_argdecl"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitIdlist_expression(ExprParser::Idlist_expressionContext *context)
    {
        //cout<<"In visitIdlist_expression"<<flush<<endl;
        vector<exprnode*> v;
        v.push_back((exprnode*)visit(context->expression()));
        //cout<<"Out visitIdlist_expression"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitIdlist_list_expr(ExprParser::Idlist_list_exprContext *context)
    {
        //cout<<"In visitIdlist_list_expr"<<flush<<endl;
        vector<exprnode*> v = visit(context->idlist());
        v.push_back((exprnode*)visit(context->expression()));
        //cout<<"Out visitIdlist_list_expr"<<flush<<endl;
        return v;
    }

    virtual antlrcpp::Any visitIdlist_empty(ExprParser::Idlist_emptyContext *context)
    {
        //cout<<"In visitIdlist_empty"<<flush<<endl;
        //cout<<"Out visitIdlist_empty"<<flush<<endl;
        vector<exprnode*> v;
        return v;
    }

    virtual antlrcpp::Any visitFunc_def_definition(ExprParser::Func_def_definitionContext *context)
    {
        //cout<<"In visitFunc_def_definition"<<flush<<endl;
        string returntype = visit(context->datatype());
        string fnname = context->IDENTIFIER()->getText();
        idnode* name = new idnode(fnname,"function");
        vector<arg_declaration*> func_args = visit(context->function_args());
        comp_stmnt* body = (comp_stmnt*)visit(context->compound_stmnt());
        fndefnode *fd = new fndefnode(returntype, name, func_args, body);
        //cout<<"Out visitFunc_def_definition"<<flush<<endl;
        return (fndefnode*)fd;
    }

    virtual antlrcpp::Any visitFunc_call_called(ExprParser::Func_call_calledContext *context)
    {
        //cout<<"In visitFunc_call_called"<<flush<<endl;
        string fnname = context->IDENTIFIER()->getText();
        idnode* name = new idnode(fnname,"function");
        vector<exprnode*> arglist = visit(context->idlist());
        fncallnode *fc = new fncallnode(name, arglist);
        //cout<<"Out visitFunc_call_called"<<flush<<endl;
        return (exprnode*)fc;
    }

    virtual antlrcpp::Any visitCompound_stmnt_blank(ExprParser::Compound_stmnt_blankContext *context)
    {
        //cout<<"In visitCompound_stmnt_blank"<<flush<<endl;
        //cout<<"Out visitCompound_stmnt_blank"<<flush<<endl;
        vector<stmntnode*> v;
        comp_stmnt *cs = new comp_stmnt(v);
        return cs;
    }

    virtual antlrcpp::Any visitCompound_stmnt_list(ExprParser::Compound_stmnt_listContext *context)
    {
        //cout<<"In visitCompound_stmnt_list"<<flush<<endl;
        vector<stmntnode*> v = visit(context->statement_list());
        comp_stmnt *cs = new comp_stmnt(v);
        //cout<<"Out visitCompound_stmnt_list"<<flush<<endl;
        return cs;
    }

    virtual antlrcpp::Any visitStatement_selection(ExprParser::Statement_selectionContext *context)
    {
        //cout<<"In visitStatement_selection"<<flush<<endl;
        //cout<<"Out visitStatement_selection"<<flush<<endl;
        return (stmntnode*)visit(context->selection_stmnt());
    }

    virtual antlrcpp::Any visitStatement_iterative(ExprParser::Statement_iterativeContext *context)
    {
        //cout<<"In visitStatement_iterative"<<flush<<endl;
        //cout<<"Out visitStatement_iterative"<<flush<<endl;
        return (stmntnode*)visit(context->iterative_stmnnt());
    }

    virtual antlrcpp::Any visitStatement_compound(ExprParser::Statement_compoundContext *context)
    {
        //cout<<"In visitStatement_compound"<<flush<<endl;
        //cout<<"Out visitStatement_compound"<<flush<<endl;
        return (stmntnode*)visit(context->compound_stmnt());
    }

    virtual antlrcpp::Any visitStatement_expression(ExprParser::Statement_expressionContext *context)
    {
        //cout<<"In visitStatement_expression"<<flush<<endl;
        //cout<<"Out visitStatement_expression"<<flush<<endl;
        exprnode* expr = (exprnode*)visit(context->expression_stmnt());
        return (stmntnode*)expr;
    }

    virtual antlrcpp::Any visitStatement_localparamlist(ExprParser::Statement_localparamlistContext *context)
    {
        //cout<<"In visitStatement_localparamlist"<<flush<<endl;
        //cout<<"Out visitStatement_localparamlist"<<flush<<endl;
        stmntnode* temp = (stmntnode*)((localparamlist*)visit(context->local_param_list()));
        //cout<<"Success in statement typecast "<<endl;
        return temp;
    }

    virtual antlrcpp::Any visitStatement_jump(ExprParser::Statement_jumpContext *context)
    {
        //cout<<"In visitStatement_jump"<<flush<<endl;
        //cout<<"Out visitStatement_jump"<<flush<<endl;
        return (stmntnode*)visit(context->jump_stmnt());
    }

    virtual antlrcpp::Any visitStatement_ternary(ExprParser::Statement_ternaryContext *context)
    {
        //cout<<"In visitStatement_jump"<<flush<<endl;
        //cout<<"Out visitStatement_jump"<<flush<<endl;
        return (stmntnode*)visit(context->ternary_opr());
    }

};