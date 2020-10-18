
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitStart(ExprParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitInterlist_inter(ExprParser::Interlist_interContext *context) = 0;

    virtual antlrcpp::Any visitInterlist_interlist_inter(ExprParser::Interlist_interlist_interContext *context) = 0;

    virtual antlrcpp::Any visitInter_parameter_list(ExprParser::Inter_parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitInter_funcdef(ExprParser::Inter_funcdefContext *context) = 0;

    virtual antlrcpp::Any visitExpression_NUMBER_tag(ExprParser::Expression_NUMBER_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_array_tag(ExprParser::Expression_array_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_not_equal_tag(ExprParser::Expression_binary_not_equal_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_logical_and_tag(ExprParser::Expression_binary_logical_and_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_add_tag(ExprParser::Expression_binary_add_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_less_tag(ExprParser::Expression_binary_less_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_assign_tag(ExprParser::Expression_binary_assign_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_STRING_LITERAL_tag(ExprParser::Expression_STRING_LITERAL_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_logical_or_tag(ExprParser::Expression_binary_logical_or_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_mul_tag(ExprParser::Expression_binary_mul_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_div_tag(ExprParser::Expression_binary_div_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_great_tag(ExprParser::Expression_binary_great_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_CHAR_tag(ExprParser::Expression_CHAR_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_unary_minus_tag(ExprParser::Expression_unary_minus_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_le_tag(ExprParser::Expression_binary_le_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_ge_tag(ExprParser::Expression_binary_ge_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_exactly_equal_tag(ExprParser::Expression_binary_exactly_equal_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_func_call_tag(ExprParser::Expression_func_call_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_brackets_expression_tag(ExprParser::Expression_brackets_expression_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_unary_excl_tag(ExprParser::Expression_unary_excl_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_IDENTIFIER_tag(ExprParser::Expression_IDENTIFIER_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_binary_sub_tag(ExprParser::Expression_binary_sub_tagContext *context) = 0;

    virtual antlrcpp::Any visitTernary_opr_tag(ExprParser::Ternary_opr_tagContext *context) = 0;

    virtual antlrcpp::Any visitExpression_stmnt_semicolon(ExprParser::Expression_stmnt_semicolonContext *context) = 0;

    virtual antlrcpp::Any visitExpression_stmnt_expression(ExprParser::Expression_stmnt_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSelection_stmnt_if_wo_else(ExprParser::Selection_stmnt_if_wo_elseContext *context) = 0;

    virtual antlrcpp::Any visitSelection_stmnt_if_w_else(ExprParser::Selection_stmnt_if_w_elseContext *context) = 0;

    virtual antlrcpp::Any visitIterative_stmnnt_while(ExprParser::Iterative_stmnnt_whileContext *context) = 0;

    virtual antlrcpp::Any visitIterative_stmnnt_for(ExprParser::Iterative_stmnnt_forContext *context) = 0;

    virtual antlrcpp::Any visitJump_stmnt_continue(ExprParser::Jump_stmnt_continueContext *context) = 0;

    virtual antlrcpp::Any visitJump_stmnt_break(ExprParser::Jump_stmnt_breakContext *context) = 0;

    virtual antlrcpp::Any visitJump_stmnt_return(ExprParser::Jump_stmnt_returnContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list_statement(ExprParser::Statement_list_statementContext *context) = 0;

    virtual antlrcpp::Any visitStatement_list_list_stmnt(ExprParser::Statement_list_list_stmntContext *context) = 0;

    virtual antlrcpp::Any visitDatatype_int(ExprParser::Datatype_intContext *context) = 0;

    virtual antlrcpp::Any visitDatatype_uint(ExprParser::Datatype_uintContext *context) = 0;

    virtual antlrcpp::Any visitDatatype_char(ExprParser::Datatype_charContext *context) = 0;

    virtual antlrcpp::Any visitDatatype_bool(ExprParser::Datatype_boolContext *context) = 0;

    virtual antlrcpp::Any visitDatatype_void(ExprParser::Datatype_voidContext *context) = 0;

    virtual antlrcpp::Any visitArray_1d(ExprParser::Array_1dContext *context) = 0;

    virtual antlrcpp::Any visitArray_2d(ExprParser::Array_2dContext *context) = 0;

    virtual antlrcpp::Any visitArg_decl_dtID(ExprParser::Arg_decl_dtIDContext *context) = 0;

    virtual antlrcpp::Any visitArg_decl_empty(ExprParser::Arg_decl_emptyContext *context) = 0;

    virtual antlrcpp::Any visitInitialization_expr(ExprParser::Initialization_exprContext *context) = 0;

    virtual antlrcpp::Any visitDeclinfo_id(ExprParser::Declinfo_idContext *context) = 0;

    virtual antlrcpp::Any visitDeclinfo_id_init(ExprParser::Declinfo_id_initContext *context) = 0;

    virtual antlrcpp::Any visitDeclinfo_array_1d(ExprParser::Declinfo_array_1dContext *context) = 0;

    virtual antlrcpp::Any visitDeclinfo_array_2d(ExprParser::Declinfo_array_2dContext *context) = 0;

    virtual antlrcpp::Any visitDeclist_list_info(ExprParser::Declist_list_infoContext *context) = 0;

    virtual antlrcpp::Any visitDeclist_declinfo(ExprParser::Declist_declinfoContext *context) = 0;

    virtual antlrcpp::Any visitParameter_decl_data_expression(ExprParser::Parameter_decl_data_expressionContext *context) = 0;

    virtual antlrcpp::Any visitLocal_param_list_data_list(ExprParser::Local_param_list_data_listContext *context) = 0;

    virtual antlrcpp::Any visitFunction_args_argdecl(ExprParser::Function_args_argdeclContext *context) = 0;

    virtual antlrcpp::Any visitFunction_args_args_argdecl(ExprParser::Function_args_args_argdeclContext *context) = 0;

    virtual antlrcpp::Any visitIdlist_expression(ExprParser::Idlist_expressionContext *context) = 0;

    virtual antlrcpp::Any visitIdlist_list_expr(ExprParser::Idlist_list_exprContext *context) = 0;

    virtual antlrcpp::Any visitIdlist_empty(ExprParser::Idlist_emptyContext *context) = 0;

    virtual antlrcpp::Any visitFunc_def_definition(ExprParser::Func_def_definitionContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call_called(ExprParser::Func_call_calledContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmnt_blank(ExprParser::Compound_stmnt_blankContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmnt_list(ExprParser::Compound_stmnt_listContext *context) = 0;

    virtual antlrcpp::Any visitStatement_selection(ExprParser::Statement_selectionContext *context) = 0;

    virtual antlrcpp::Any visitStatement_iterative(ExprParser::Statement_iterativeContext *context) = 0;

    virtual antlrcpp::Any visitStatement_compound(ExprParser::Statement_compoundContext *context) = 0;

    virtual antlrcpp::Any visitStatement_expression(ExprParser::Statement_expressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement_localparamlist(ExprParser::Statement_localparamlistContext *context) = 0;

    virtual antlrcpp::Any visitStatement_jump(ExprParser::Statement_jumpContext *context) = 0;

    virtual antlrcpp::Any visitStatement_ternary(ExprParser::Statement_ternaryContext *context) = 0;


};

