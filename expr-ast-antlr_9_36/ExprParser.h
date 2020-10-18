
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    IDENTIFIER = 39, NUMBER = 40, CHAR = 41, STRING_LITERAL = 42, COMMENT = 43, 
    NS = 44
  };

  enum {
    RuleStart = 0, RuleInterlist = 1, RuleInter = 2, RuleExpression = 3, 
    RuleTernary_opr = 4, RuleExpression_stmnt = 5, RuleSelection_stmnt = 6, 
    RuleIterative_stmnnt = 7, RuleJump_stmnt = 8, RuleStatement_list = 9, 
    RuleDatatype = 10, RuleArray = 11, RuleArg_decl = 12, RuleInitialization = 13, 
    RuleDeclinfo = 14, RuleDeclist = 15, RuleParameter_list = 16, RuleLocal_param_list = 17, 
    RuleFunction_args = 18, RuleIdlist = 19, RuleFunc_def = 20, RuleFunc_call = 21, 
    RuleCompound_stmnt = 22, RuleStatement = 23
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartContext;
  class InterlistContext;
  class InterContext;
  class ExpressionContext;
  class Ternary_oprContext;
  class Expression_stmntContext;
  class Selection_stmntContext;
  class Iterative_stmnntContext;
  class Jump_stmntContext;
  class Statement_listContext;
  class DatatypeContext;
  class ArrayContext;
  class Arg_declContext;
  class InitializationContext;
  class DeclinfoContext;
  class DeclistContext;
  class Parameter_listContext;
  class Local_param_listContext;
  class Function_argsContext;
  class IdlistContext;
  class Func_defContext;
  class Func_callContext;
  class Compound_stmntContext;
  class StatementContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterlistContext *interlist();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  InterlistContext : public antlr4::ParserRuleContext {
  public:
    InterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InterlistContext() = default;
    void copyFrom(InterlistContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Interlist_interContext : public InterlistContext {
  public:
    Interlist_interContext(InterlistContext *ctx);

    InterContext *inter();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Interlist_interlist_interContext : public InterlistContext {
  public:
    Interlist_interlist_interContext(InterlistContext *ctx);

    InterlistContext *interlist();
    InterContext *inter();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InterlistContext* interlist();
  InterlistContext* interlist(int precedence);
  class  InterContext : public antlr4::ParserRuleContext {
  public:
    InterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InterContext() = default;
    void copyFrom(InterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Inter_parameter_listContext : public InterContext {
  public:
    Inter_parameter_listContext(InterContext *ctx);

    Parameter_listContext *parameter_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Inter_funcdefContext : public InterContext {
  public:
    Inter_funcdefContext(InterContext *ctx);

    Func_defContext *func_def();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InterContext* inter();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expression_NUMBER_tagContext : public ExpressionContext {
  public:
    Expression_NUMBER_tagContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_array_tagContext : public ExpressionContext {
  public:
    Expression_array_tagContext(ExpressionContext *ctx);

    ArrayContext *array();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_not_equal_tagContext : public ExpressionContext {
  public:
    Expression_binary_not_equal_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_logical_and_tagContext : public ExpressionContext {
  public:
    Expression_binary_logical_and_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_add_tagContext : public ExpressionContext {
  public:
    Expression_binary_add_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_less_tagContext : public ExpressionContext {
  public:
    Expression_binary_less_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_assign_tagContext : public ExpressionContext {
  public:
    Expression_binary_assign_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_STRING_LITERAL_tagContext : public ExpressionContext {
  public:
    Expression_STRING_LITERAL_tagContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_logical_or_tagContext : public ExpressionContext {
  public:
    Expression_binary_logical_or_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_mul_tagContext : public ExpressionContext {
  public:
    Expression_binary_mul_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_div_tagContext : public ExpressionContext {
  public:
    Expression_binary_div_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_great_tagContext : public ExpressionContext {
  public:
    Expression_binary_great_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_CHAR_tagContext : public ExpressionContext {
  public:
    Expression_CHAR_tagContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_unary_minus_tagContext : public ExpressionContext {
  public:
    Expression_unary_minus_tagContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_le_tagContext : public ExpressionContext {
  public:
    Expression_binary_le_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_ge_tagContext : public ExpressionContext {
  public:
    Expression_binary_ge_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_exactly_equal_tagContext : public ExpressionContext {
  public:
    Expression_binary_exactly_equal_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_func_call_tagContext : public ExpressionContext {
  public:
    Expression_func_call_tagContext(ExpressionContext *ctx);

    Func_callContext *func_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_brackets_expression_tagContext : public ExpressionContext {
  public:
    Expression_brackets_expression_tagContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_unary_excl_tagContext : public ExpressionContext {
  public:
    Expression_unary_excl_tagContext(ExpressionContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_IDENTIFIER_tagContext : public ExpressionContext {
  public:
    Expression_IDENTIFIER_tagContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_binary_sub_tagContext : public ExpressionContext {
  public:
    Expression_binary_sub_tagContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Ternary_oprContext : public antlr4::ParserRuleContext {
  public:
    Ternary_oprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Ternary_oprContext() = default;
    void copyFrom(Ternary_oprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Ternary_opr_tagContext : public Ternary_oprContext {
  public:
    Ternary_opr_tagContext(Ternary_oprContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Ternary_oprContext* ternary_opr();

  class  Expression_stmntContext : public antlr4::ParserRuleContext {
  public:
    Expression_stmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Expression_stmntContext() = default;
    void copyFrom(Expression_stmntContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expression_stmnt_expressionContext : public Expression_stmntContext {
  public:
    Expression_stmnt_expressionContext(Expression_stmntContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expression_stmnt_semicolonContext : public Expression_stmntContext {
  public:
    Expression_stmnt_semicolonContext(Expression_stmntContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Expression_stmntContext* expression_stmnt();

  class  Selection_stmntContext : public antlr4::ParserRuleContext {
  public:
    Selection_stmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Selection_stmntContext() = default;
    void copyFrom(Selection_stmntContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Selection_stmnt_if_w_elseContext : public Selection_stmntContext {
  public:
    Selection_stmnt_if_w_elseContext(Selection_stmntContext *ctx);

    ExpressionContext *expression();
    std::vector<Compound_stmntContext *> compound_stmnt();
    Compound_stmntContext* compound_stmnt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Selection_stmnt_if_wo_elseContext : public Selection_stmntContext {
  public:
    Selection_stmnt_if_wo_elseContext(Selection_stmntContext *ctx);

    ExpressionContext *expression();
    Compound_stmntContext *compound_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Selection_stmntContext* selection_stmnt();

  class  Iterative_stmnntContext : public antlr4::ParserRuleContext {
  public:
    Iterative_stmnntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Iterative_stmnntContext() = default;
    void copyFrom(Iterative_stmnntContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Iterative_stmnnt_forContext : public Iterative_stmnntContext {
  public:
    Iterative_stmnnt_forContext(Iterative_stmnntContext *ctx);

    Local_param_listContext *local_param_list();
    Expression_stmntContext *expression_stmnt();
    ExpressionContext *expression();
    Compound_stmntContext *compound_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Iterative_stmnnt_whileContext : public Iterative_stmnntContext {
  public:
    Iterative_stmnnt_whileContext(Iterative_stmnntContext *ctx);

    ExpressionContext *expression();
    Compound_stmntContext *compound_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Iterative_stmnntContext* iterative_stmnnt();

  class  Jump_stmntContext : public antlr4::ParserRuleContext {
  public:
    Jump_stmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Jump_stmntContext() = default;
    void copyFrom(Jump_stmntContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Jump_stmnt_continueContext : public Jump_stmntContext {
  public:
    Jump_stmnt_continueContext(Jump_stmntContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Jump_stmnt_returnContext : public Jump_stmntContext {
  public:
    Jump_stmnt_returnContext(Jump_stmntContext *ctx);

    Expression_stmntContext *expression_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Jump_stmnt_breakContext : public Jump_stmntContext {
  public:
    Jump_stmnt_breakContext(Jump_stmntContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Jump_stmntContext* jump_stmnt();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Statement_listContext() = default;
    void copyFrom(Statement_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Statement_list_statementContext : public Statement_listContext {
  public:
    Statement_list_statementContext(Statement_listContext *ctx);

    StatementContext *statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_list_list_stmntContext : public Statement_listContext {
  public:
    Statement_list_list_stmntContext(Statement_listContext *ctx);

    Statement_listContext *statement_list();
    StatementContext *statement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Statement_listContext* statement_list();
  Statement_listContext* statement_list(int precedence);
  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DatatypeContext() = default;
    void copyFrom(DatatypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Datatype_charContext : public DatatypeContext {
  public:
    Datatype_charContext(DatatypeContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Datatype_intContext : public DatatypeContext {
  public:
    Datatype_intContext(DatatypeContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Datatype_voidContext : public DatatypeContext {
  public:
    Datatype_voidContext(DatatypeContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Datatype_boolContext : public DatatypeContext {
  public:
    Datatype_boolContext(DatatypeContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Datatype_uintContext : public DatatypeContext {
  public:
    Datatype_uintContext(DatatypeContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DatatypeContext* datatype();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArrayContext() = default;
    void copyFrom(ArrayContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Array_2dContext : public ArrayContext {
  public:
    Array_2dContext(ArrayContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Array_1dContext : public ArrayContext {
  public:
    Array_1dContext(ArrayContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArrayContext* array();

  class  Arg_declContext : public antlr4::ParserRuleContext {
  public:
    Arg_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Arg_declContext() = default;
    void copyFrom(Arg_declContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Arg_decl_dtIDContext : public Arg_declContext {
  public:
    Arg_decl_dtIDContext(Arg_declContext *ctx);

    DatatypeContext *datatype();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Arg_decl_emptyContext : public Arg_declContext {
  public:
    Arg_decl_emptyContext(Arg_declContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Arg_declContext* arg_decl();

  class  InitializationContext : public antlr4::ParserRuleContext {
  public:
    InitializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InitializationContext() = default;
    void copyFrom(InitializationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Initialization_exprContext : public InitializationContext {
  public:
    Initialization_exprContext(InitializationContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InitializationContext* initialization();

  class  DeclinfoContext : public antlr4::ParserRuleContext {
  public:
    DeclinfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclinfoContext() = default;
    void copyFrom(DeclinfoContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Declinfo_array_1dContext : public DeclinfoContext {
  public:
    Declinfo_array_1dContext(DeclinfoContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declinfo_idContext : public DeclinfoContext {
  public:
    Declinfo_idContext(DeclinfoContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declinfo_id_initContext : public DeclinfoContext {
  public:
    Declinfo_id_initContext(DeclinfoContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    InitializationContext *initialization();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declinfo_array_2dContext : public DeclinfoContext {
  public:
    Declinfo_array_2dContext(DeclinfoContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclinfoContext* declinfo();

  class  DeclistContext : public antlr4::ParserRuleContext {
  public:
    DeclistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclistContext() = default;
    void copyFrom(DeclistContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Declist_list_infoContext : public DeclistContext {
  public:
    Declist_list_infoContext(DeclistContext *ctx);

    DeclistContext *declist();
    DeclinfoContext *declinfo();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declist_declinfoContext : public DeclistContext {
  public:
    Declist_declinfoContext(DeclistContext *ctx);

    DeclinfoContext *declinfo();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclistContext* declist();
  DeclistContext* declist(int precedence);
  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Parameter_listContext() = default;
    void copyFrom(Parameter_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Parameter_decl_data_expressionContext : public Parameter_listContext {
  public:
    Parameter_decl_data_expressionContext(Parameter_listContext *ctx);

    DatatypeContext *datatype();
    DeclistContext *declist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Parameter_listContext* parameter_list();

  class  Local_param_listContext : public antlr4::ParserRuleContext {
  public:
    Local_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Local_param_listContext() = default;
    void copyFrom(Local_param_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Local_param_list_data_listContext : public Local_param_listContext {
  public:
    Local_param_list_data_listContext(Local_param_listContext *ctx);

    DatatypeContext *datatype();
    DeclistContext *declist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Local_param_listContext* local_param_list();

  class  Function_argsContext : public antlr4::ParserRuleContext {
  public:
    Function_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Function_argsContext() = default;
    void copyFrom(Function_argsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Function_args_argdeclContext : public Function_argsContext {
  public:
    Function_args_argdeclContext(Function_argsContext *ctx);

    Arg_declContext *arg_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Function_args_args_argdeclContext : public Function_argsContext {
  public:
    Function_args_args_argdeclContext(Function_argsContext *ctx);

    Function_argsContext *function_args();
    Arg_declContext *arg_decl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Function_argsContext* function_args();
  Function_argsContext* function_args(int precedence);
  class  IdlistContext : public antlr4::ParserRuleContext {
  public:
    IdlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IdlistContext() = default;
    void copyFrom(IdlistContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Idlist_expressionContext : public IdlistContext {
  public:
    Idlist_expressionContext(IdlistContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Idlist_list_exprContext : public IdlistContext {
  public:
    Idlist_list_exprContext(IdlistContext *ctx);

    IdlistContext *idlist();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Idlist_emptyContext : public IdlistContext {
  public:
    Idlist_emptyContext(IdlistContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IdlistContext* idlist();
  IdlistContext* idlist(int precedence);
  class  Func_defContext : public antlr4::ParserRuleContext {
  public:
    Func_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_defContext() = default;
    void copyFrom(Func_defContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Func_def_definitionContext : public Func_defContext {
  public:
    Func_def_definitionContext(Func_defContext *ctx);

    DatatypeContext *datatype();
    antlr4::tree::TerminalNode *IDENTIFIER();
    Function_argsContext *function_args();
    Compound_stmntContext *compound_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_defContext* func_def();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_callContext() = default;
    void copyFrom(Func_callContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Func_call_calledContext : public Func_callContext {
  public:
    Func_call_calledContext(Func_callContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    IdlistContext *idlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_callContext* func_call();

  class  Compound_stmntContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Compound_stmntContext() = default;
    void copyFrom(Compound_stmntContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Compound_stmnt_blankContext : public Compound_stmntContext {
  public:
    Compound_stmnt_blankContext(Compound_stmntContext *ctx);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compound_stmnt_listContext : public Compound_stmntContext {
  public:
    Compound_stmnt_listContext(Compound_stmntContext *ctx);

    Statement_listContext *statement_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Compound_stmntContext* compound_stmnt();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Statement_compoundContext : public StatementContext {
  public:
    Statement_compoundContext(StatementContext *ctx);

    Compound_stmntContext *compound_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_selectionContext : public StatementContext {
  public:
    Statement_selectionContext(StatementContext *ctx);

    Selection_stmntContext *selection_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_localparamlistContext : public StatementContext {
  public:
    Statement_localparamlistContext(StatementContext *ctx);

    Local_param_listContext *local_param_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_iterativeContext : public StatementContext {
  public:
    Statement_iterativeContext(StatementContext *ctx);

    Iterative_stmnntContext *iterative_stmnnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_ternaryContext : public StatementContext {
  public:
    Statement_ternaryContext(StatementContext *ctx);

    Ternary_oprContext *ternary_opr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_expressionContext : public StatementContext {
  public:
    Statement_expressionContext(StatementContext *ctx);

    Expression_stmntContext *expression_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Statement_jumpContext : public StatementContext {
  public:
    Statement_jumpContext(StatementContext *ctx);

    Jump_stmntContext *jump_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool interlistSempred(InterlistContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex);
  bool declistSempred(DeclistContext *_localctx, size_t predicateIndex);
  bool function_argsSempred(Function_argsContext *_localctx, size_t predicateIndex);
  bool idlistSempred(IdlistContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

