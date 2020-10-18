
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitStart(ExprParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterlist_inter(ExprParser::Interlist_interContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterlist_interlist_inter(ExprParser::Interlist_interlist_interContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInter_parameter_list(ExprParser::Inter_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInter_funcdef(ExprParser::Inter_funcdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_NUMBER_tag(ExprParser::Expression_NUMBER_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_array_tag(ExprParser::Expression_array_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_not_equal_tag(ExprParser::Expression_binary_not_equal_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_logical_and_tag(ExprParser::Expression_binary_logical_and_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_add_tag(ExprParser::Expression_binary_add_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_less_tag(ExprParser::Expression_binary_less_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_assign_tag(ExprParser::Expression_binary_assign_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_STRING_LITERAL_tag(ExprParser::Expression_STRING_LITERAL_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_logical_or_tag(ExprParser::Expression_binary_logical_or_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_mul_tag(ExprParser::Expression_binary_mul_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_div_tag(ExprParser::Expression_binary_div_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_great_tag(ExprParser::Expression_binary_great_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_CHAR_tag(ExprParser::Expression_CHAR_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_unary_minus_tag(ExprParser::Expression_unary_minus_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_le_tag(ExprParser::Expression_binary_le_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_ge_tag(ExprParser::Expression_binary_ge_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_exactly_equal_tag(ExprParser::Expression_binary_exactly_equal_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_func_call_tag(ExprParser::Expression_func_call_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_brackets_expression_tag(ExprParser::Expression_brackets_expression_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_unary_excl_tag(ExprParser::Expression_unary_excl_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_IDENTIFIER_tag(ExprParser::Expression_IDENTIFIER_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_binary_sub_tag(ExprParser::Expression_binary_sub_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernary_opr_tag(ExprParser::Ternary_opr_tagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_stmnt_semicolon(ExprParser::Expression_stmnt_semicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_stmnt_expression(ExprParser::Expression_stmnt_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelection_stmnt_if_wo_else(ExprParser::Selection_stmnt_if_wo_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelection_stmnt_if_w_else(ExprParser::Selection_stmnt_if_w_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterative_stmnnt_while(ExprParser::Iterative_stmnnt_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterative_stmnnt_for(ExprParser::Iterative_stmnnt_forContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJump_stmnt_continue(ExprParser::Jump_stmnt_continueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJump_stmnt_break(ExprParser::Jump_stmnt_breakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJump_stmnt_return(ExprParser::Jump_stmnt_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_list_statement(ExprParser::Statement_list_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_list_list_stmnt(ExprParser::Statement_list_list_stmntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype_int(ExprParser::Datatype_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype_uint(ExprParser::Datatype_uintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype_char(ExprParser::Datatype_charContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype_bool(ExprParser::Datatype_boolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype_void(ExprParser::Datatype_voidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_1d(ExprParser::Array_1dContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_2d(ExprParser::Array_2dContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_decl_dtID(ExprParser::Arg_decl_dtIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_decl_empty(ExprParser::Arg_decl_emptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitialization_expr(ExprParser::Initialization_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclinfo_id(ExprParser::Declinfo_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclinfo_id_init(ExprParser::Declinfo_id_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclinfo_array_1d(ExprParser::Declinfo_array_1dContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclinfo_array_2d(ExprParser::Declinfo_array_2dContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclist_list_info(ExprParser::Declist_list_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclist_declinfo(ExprParser::Declist_declinfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_decl_data_expression(ExprParser::Parameter_decl_data_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocal_param_list_data_list(ExprParser::Local_param_list_data_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_args_argdecl(ExprParser::Function_args_argdeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_args_args_argdecl(ExprParser::Function_args_args_argdeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdlist_expression(ExprParser::Idlist_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdlist_list_expr(ExprParser::Idlist_list_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdlist_empty(ExprParser::Idlist_emptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_def_definition(ExprParser::Func_def_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call_called(ExprParser::Func_call_calledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_stmnt_blank(ExprParser::Compound_stmnt_blankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_stmnt_list(ExprParser::Compound_stmnt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_selection(ExprParser::Statement_selectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_iterative(ExprParser::Statement_iterativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_compound(ExprParser::Statement_compoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_expression(ExprParser::Statement_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_localparamlist(ExprParser::Statement_localparamlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_jump(ExprParser::Statement_jumpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_ternary(ExprParser::Statement_ternaryContext *ctx) override {
    return visitChildren(ctx);
  }


};

