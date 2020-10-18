
// Generated from Expr.g4 by ANTLR 4.8


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

ExprParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::InterlistContext* ExprParser::StartContext::interlist() {
  return getRuleContext<ExprParser::InterlistContext>(0);
}

tree::TerminalNode* ExprParser::StartContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}


size_t ExprParser::StartContext::getRuleIndex() const {
  return ExprParser::RuleStart;
}


antlrcpp::Any ExprParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StartContext* ExprParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    interlist(0);
    setState(49);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterlistContext ------------------------------------------------------------------

ExprParser::InterlistContext::InterlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::InterlistContext::getRuleIndex() const {
  return ExprParser::RuleInterlist;
}

void ExprParser::InterlistContext::copyFrom(InterlistContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Interlist_interContext ------------------------------------------------------------------

ExprParser::InterContext* ExprParser::Interlist_interContext::inter() {
  return getRuleContext<ExprParser::InterContext>(0);
}

ExprParser::Interlist_interContext::Interlist_interContext(InterlistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Interlist_interContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInterlist_inter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Interlist_interlist_interContext ------------------------------------------------------------------

ExprParser::InterlistContext* ExprParser::Interlist_interlist_interContext::interlist() {
  return getRuleContext<ExprParser::InterlistContext>(0);
}

ExprParser::InterContext* ExprParser::Interlist_interlist_interContext::inter() {
  return getRuleContext<ExprParser::InterContext>(0);
}

ExprParser::Interlist_interlist_interContext::Interlist_interlist_interContext(InterlistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Interlist_interlist_interContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInterlist_interlist_inter(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::InterlistContext* ExprParser::interlist() {
   return interlist(0);
}

ExprParser::InterlistContext* ExprParser::interlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::InterlistContext *_localctx = _tracker.createInstance<InterlistContext>(_ctx, parentState);
  ExprParser::InterlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleInterlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Interlist_interContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(52);
    inter();
    _ctx->stop = _input->LT(-1);
    setState(58);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Interlist_interlist_interContext>(_tracker.createInstance<InterlistContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleInterlist);
        setState(54);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(55);
        inter(); 
      }
      setState(60);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InterContext ------------------------------------------------------------------

ExprParser::InterContext::InterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::InterContext::getRuleIndex() const {
  return ExprParser::RuleInter;
}

void ExprParser::InterContext::copyFrom(InterContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Inter_parameter_listContext ------------------------------------------------------------------

ExprParser::Parameter_listContext* ExprParser::Inter_parameter_listContext::parameter_list() {
  return getRuleContext<ExprParser::Parameter_listContext>(0);
}

ExprParser::Inter_parameter_listContext::Inter_parameter_listContext(InterContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Inter_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInter_parameter_list(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Inter_funcdefContext ------------------------------------------------------------------

ExprParser::Func_defContext* ExprParser::Inter_funcdefContext::func_def() {
  return getRuleContext<ExprParser::Func_defContext>(0);
}

ExprParser::Inter_funcdefContext::Inter_funcdefContext(InterContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Inter_funcdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInter_funcdef(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::InterContext* ExprParser::inter() {
  InterContext *_localctx = _tracker.createInstance<InterContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleInter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InterContext *>(_tracker.createInstance<ExprParser::Inter_parameter_listContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(61);
      parameter_list();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InterContext *>(_tracker.createInstance<ExprParser::Inter_funcdefContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(62);
      func_def();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}

void ExprParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expression_NUMBER_tagContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Expression_NUMBER_tagContext::NUMBER() {
  return getToken(ExprParser::NUMBER, 0);
}

ExprParser::Expression_NUMBER_tagContext::Expression_NUMBER_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_NUMBER_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_NUMBER_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_array_tagContext ------------------------------------------------------------------

ExprParser::ArrayContext* ExprParser::Expression_array_tagContext::array() {
  return getRuleContext<ExprParser::ArrayContext>(0);
}

ExprParser::Expression_array_tagContext::Expression_array_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_array_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_array_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_not_equal_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_not_equal_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_not_equal_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_not_equal_tagContext::Expression_binary_not_equal_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_not_equal_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_not_equal_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_logical_and_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_logical_and_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_logical_and_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_logical_and_tagContext::Expression_binary_logical_and_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_logical_and_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_logical_and_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_add_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_add_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_add_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_add_tagContext::Expression_binary_add_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_add_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_add_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_less_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_less_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_less_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_less_tagContext::Expression_binary_less_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_less_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_less_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_assign_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_assign_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_assign_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_assign_tagContext::Expression_binary_assign_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_assign_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_assign_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_STRING_LITERAL_tagContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Expression_STRING_LITERAL_tagContext::STRING_LITERAL() {
  return getToken(ExprParser::STRING_LITERAL, 0);
}

ExprParser::Expression_STRING_LITERAL_tagContext::Expression_STRING_LITERAL_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_STRING_LITERAL_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_STRING_LITERAL_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_logical_or_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_logical_or_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_logical_or_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_logical_or_tagContext::Expression_binary_logical_or_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_logical_or_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_logical_or_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_mul_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_mul_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_mul_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_mul_tagContext::Expression_binary_mul_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_mul_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_mul_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_div_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_div_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_div_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_div_tagContext::Expression_binary_div_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_div_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_div_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_great_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_great_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_great_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_great_tagContext::Expression_binary_great_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_great_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_great_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_CHAR_tagContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Expression_CHAR_tagContext::CHAR() {
  return getToken(ExprParser::CHAR, 0);
}

ExprParser::Expression_CHAR_tagContext::Expression_CHAR_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_CHAR_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_CHAR_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_unary_minus_tagContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Expression_unary_minus_tagContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Expression_unary_minus_tagContext::Expression_unary_minus_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_unary_minus_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_unary_minus_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_le_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_le_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_le_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_le_tagContext::Expression_binary_le_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_le_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_le_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_ge_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_ge_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_ge_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_ge_tagContext::Expression_binary_ge_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_ge_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_ge_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_exactly_equal_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_exactly_equal_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_exactly_equal_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_exactly_equal_tagContext::Expression_binary_exactly_equal_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_exactly_equal_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_exactly_equal_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_func_call_tagContext ------------------------------------------------------------------

ExprParser::Func_callContext* ExprParser::Expression_func_call_tagContext::func_call() {
  return getRuleContext<ExprParser::Func_callContext>(0);
}

ExprParser::Expression_func_call_tagContext::Expression_func_call_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_func_call_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_func_call_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_brackets_expression_tagContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Expression_brackets_expression_tagContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Expression_brackets_expression_tagContext::Expression_brackets_expression_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_brackets_expression_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_brackets_expression_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_unary_excl_tagContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Expression_unary_excl_tagContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Expression_unary_excl_tagContext::Expression_unary_excl_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_unary_excl_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_unary_excl_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_IDENTIFIER_tagContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Expression_IDENTIFIER_tagContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::Expression_IDENTIFIER_tagContext::Expression_IDENTIFIER_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_IDENTIFIER_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_IDENTIFIER_tag(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_binary_sub_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Expression_binary_sub_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Expression_binary_sub_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Expression_binary_sub_tagContext::Expression_binary_sub_tagContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_binary_sub_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_binary_sub_tag(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExpressionContext* ExprParser::expression() {
   return expression(0);
}

ExprParser::ExpressionContext* ExprParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ExprParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, ExprParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expression_NUMBER_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(66);
      match(ExprParser::NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expression_IDENTIFIER_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(67);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expression_STRING_LITERAL_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(68);
      match(ExprParser::STRING_LITERAL);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expression_CHAR_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(69);
      match(ExprParser::CHAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expression_array_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      array();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Expression_func_call_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      func_call();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expression_brackets_expression_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(72);
      match(ExprParser::T__0);
      setState(73);
      expression(0);
      setState(74);
      match(ExprParser::T__1);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<Expression_unary_minus_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(76);
      match(ExprParser::T__2);
      setState(77);
      expression(15);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Expression_unary_excl_tagContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(78);
      match(ExprParser::T__3);
      setState(79);
      expression(14);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(121);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expression_binary_mul_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(82);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(83);
          match(ExprParser::T__4);
          setState(84);
          expression(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expression_binary_div_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(85);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(86);
          match(ExprParser::T__5);
          setState(87);
          expression(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expression_binary_add_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(88);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(89);
          match(ExprParser::T__6);
          setState(90);
          expression(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expression_binary_sub_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(91);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(92);
          match(ExprParser::T__2);
          setState(93);
          expression(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Expression_binary_le_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(94);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(95);
          match(ExprParser::T__7);
          setState(96);
          expression(10);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Expression_binary_less_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(97);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(98);
          match(ExprParser::T__8);
          setState(99);
          expression(9);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Expression_binary_ge_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(100);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(101);
          match(ExprParser::T__9);
          setState(102);
          expression(8);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Expression_binary_great_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(103);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(104);
          match(ExprParser::T__10);
          setState(105);
          expression(7);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Expression_binary_exactly_equal_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(106);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(107);
          match(ExprParser::T__11);
          setState(108);
          expression(6);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Expression_binary_not_equal_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(109);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(110);
          match(ExprParser::T__12);
          setState(111);
          expression(5);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Expression_binary_logical_and_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(112);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(113);
          match(ExprParser::T__13);
          setState(114);
          expression(4);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<Expression_binary_logical_or_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(115);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(116);
          match(ExprParser::T__14);
          setState(117);
          expression(3);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<Expression_binary_assign_tagContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(118);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(119);
          match(ExprParser::T__15);
          setState(120);
          expression(1);
          break;
        }

        } 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Ternary_oprContext ------------------------------------------------------------------

ExprParser::Ternary_oprContext::Ternary_oprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Ternary_oprContext::getRuleIndex() const {
  return ExprParser::RuleTernary_opr;
}

void ExprParser::Ternary_oprContext::copyFrom(Ternary_oprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Ternary_opr_tagContext ------------------------------------------------------------------

std::vector<ExprParser::ExpressionContext *> ExprParser::Ternary_opr_tagContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Ternary_opr_tagContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Ternary_opr_tagContext::Ternary_opr_tagContext(Ternary_oprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Ternary_opr_tagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTernary_opr_tag(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Ternary_oprContext* ExprParser::ternary_opr() {
  Ternary_oprContext *_localctx = _tracker.createInstance<Ternary_oprContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleTernary_opr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Ternary_oprContext *>(_tracker.createInstance<ExprParser::Ternary_opr_tagContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(ExprParser::T__16);
    setState(127);
    expression(0);
    setState(128);
    match(ExprParser::T__17);
    setState(129);
    expression(0);
    setState(130);
    match(ExprParser::T__18);
    setState(131);
    expression(0);
    setState(132);
    match(ExprParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_stmntContext ------------------------------------------------------------------

ExprParser::Expression_stmntContext::Expression_stmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Expression_stmntContext::getRuleIndex() const {
  return ExprParser::RuleExpression_stmnt;
}

void ExprParser::Expression_stmntContext::copyFrom(Expression_stmntContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expression_stmnt_expressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Expression_stmnt_expressionContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Expression_stmnt_expressionContext::Expression_stmnt_expressionContext(Expression_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_stmnt_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_stmnt_expression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expression_stmnt_semicolonContext ------------------------------------------------------------------

ExprParser::Expression_stmnt_semicolonContext::Expression_stmnt_semicolonContext(Expression_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Expression_stmnt_semicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression_stmnt_semicolon(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Expression_stmntContext* ExprParser::expression_stmnt() {
  Expression_stmntContext *_localctx = _tracker.createInstance<Expression_stmntContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleExpression_stmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__19: {
        _localctx = dynamic_cast<Expression_stmntContext *>(_tracker.createInstance<ExprParser::Expression_stmnt_semicolonContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(134);
        match(ExprParser::T__19);
        break;
      }

      case ExprParser::T__0:
      case ExprParser::T__2:
      case ExprParser::T__3:
      case ExprParser::IDENTIFIER:
      case ExprParser::NUMBER:
      case ExprParser::CHAR:
      case ExprParser::STRING_LITERAL: {
        _localctx = dynamic_cast<Expression_stmntContext *>(_tracker.createInstance<ExprParser::Expression_stmnt_expressionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(135);
        expression(0);
        setState(136);
        match(ExprParser::T__19);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Selection_stmntContext ------------------------------------------------------------------

ExprParser::Selection_stmntContext::Selection_stmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Selection_stmntContext::getRuleIndex() const {
  return ExprParser::RuleSelection_stmnt;
}

void ExprParser::Selection_stmntContext::copyFrom(Selection_stmntContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Selection_stmnt_if_w_elseContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Selection_stmnt_if_w_elseContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

std::vector<ExprParser::Compound_stmntContext *> ExprParser::Selection_stmnt_if_w_elseContext::compound_stmnt() {
  return getRuleContexts<ExprParser::Compound_stmntContext>();
}

ExprParser::Compound_stmntContext* ExprParser::Selection_stmnt_if_w_elseContext::compound_stmnt(size_t i) {
  return getRuleContext<ExprParser::Compound_stmntContext>(i);
}

ExprParser::Selection_stmnt_if_w_elseContext::Selection_stmnt_if_w_elseContext(Selection_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Selection_stmnt_if_w_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSelection_stmnt_if_w_else(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Selection_stmnt_if_wo_elseContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Selection_stmnt_if_wo_elseContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Compound_stmntContext* ExprParser::Selection_stmnt_if_wo_elseContext::compound_stmnt() {
  return getRuleContext<ExprParser::Compound_stmntContext>(0);
}

ExprParser::Selection_stmnt_if_wo_elseContext::Selection_stmnt_if_wo_elseContext(Selection_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Selection_stmnt_if_wo_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSelection_stmnt_if_wo_else(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Selection_stmntContext* ExprParser::selection_stmnt() {
  Selection_stmntContext *_localctx = _tracker.createInstance<Selection_stmntContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleSelection_stmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Selection_stmntContext *>(_tracker.createInstance<ExprParser::Selection_stmnt_if_wo_elseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(140);
      match(ExprParser::T__20);
      setState(141);
      expression(0);
      setState(142);
      compound_stmnt();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Selection_stmntContext *>(_tracker.createInstance<ExprParser::Selection_stmnt_if_w_elseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(144);
      match(ExprParser::T__20);
      setState(145);
      expression(0);
      setState(146);
      compound_stmnt();
      setState(147);
      match(ExprParser::T__21);
      setState(148);
      compound_stmnt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Iterative_stmnntContext ------------------------------------------------------------------

ExprParser::Iterative_stmnntContext::Iterative_stmnntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Iterative_stmnntContext::getRuleIndex() const {
  return ExprParser::RuleIterative_stmnnt;
}

void ExprParser::Iterative_stmnntContext::copyFrom(Iterative_stmnntContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Iterative_stmnnt_forContext ------------------------------------------------------------------

ExprParser::Local_param_listContext* ExprParser::Iterative_stmnnt_forContext::local_param_list() {
  return getRuleContext<ExprParser::Local_param_listContext>(0);
}

ExprParser::Expression_stmntContext* ExprParser::Iterative_stmnnt_forContext::expression_stmnt() {
  return getRuleContext<ExprParser::Expression_stmntContext>(0);
}

ExprParser::ExpressionContext* ExprParser::Iterative_stmnnt_forContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Compound_stmntContext* ExprParser::Iterative_stmnnt_forContext::compound_stmnt() {
  return getRuleContext<ExprParser::Compound_stmntContext>(0);
}

ExprParser::Iterative_stmnnt_forContext::Iterative_stmnnt_forContext(Iterative_stmnntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Iterative_stmnnt_forContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIterative_stmnnt_for(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Iterative_stmnnt_whileContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Iterative_stmnnt_whileContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Compound_stmntContext* ExprParser::Iterative_stmnnt_whileContext::compound_stmnt() {
  return getRuleContext<ExprParser::Compound_stmntContext>(0);
}

ExprParser::Iterative_stmnnt_whileContext::Iterative_stmnnt_whileContext(Iterative_stmnntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Iterative_stmnnt_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIterative_stmnnt_while(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Iterative_stmnntContext* ExprParser::iterative_stmnnt() {
  Iterative_stmnntContext *_localctx = _tracker.createInstance<Iterative_stmnntContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleIterative_stmnnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__22: {
        _localctx = dynamic_cast<Iterative_stmnntContext *>(_tracker.createInstance<ExprParser::Iterative_stmnnt_whileContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(152);
        match(ExprParser::T__22);
        setState(153);
        expression(0);
        setState(154);
        compound_stmnt();
        break;
      }

      case ExprParser::T__23: {
        _localctx = dynamic_cast<Iterative_stmnntContext *>(_tracker.createInstance<ExprParser::Iterative_stmnnt_forContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(156);
        match(ExprParser::T__23);
        setState(157);
        match(ExprParser::T__0);
        setState(158);
        local_param_list();
        setState(159);
        expression_stmnt();
        setState(160);
        expression(0);
        setState(161);
        match(ExprParser::T__1);
        setState(162);
        compound_stmnt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Jump_stmntContext ------------------------------------------------------------------

ExprParser::Jump_stmntContext::Jump_stmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Jump_stmntContext::getRuleIndex() const {
  return ExprParser::RuleJump_stmnt;
}

void ExprParser::Jump_stmntContext::copyFrom(Jump_stmntContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Jump_stmnt_continueContext ------------------------------------------------------------------

ExprParser::Jump_stmnt_continueContext::Jump_stmnt_continueContext(Jump_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Jump_stmnt_continueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitJump_stmnt_continue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Jump_stmnt_returnContext ------------------------------------------------------------------

ExprParser::Expression_stmntContext* ExprParser::Jump_stmnt_returnContext::expression_stmnt() {
  return getRuleContext<ExprParser::Expression_stmntContext>(0);
}

ExprParser::Jump_stmnt_returnContext::Jump_stmnt_returnContext(Jump_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Jump_stmnt_returnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitJump_stmnt_return(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Jump_stmnt_breakContext ------------------------------------------------------------------

ExprParser::Jump_stmnt_breakContext::Jump_stmnt_breakContext(Jump_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Jump_stmnt_breakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitJump_stmnt_break(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Jump_stmntContext* ExprParser::jump_stmnt() {
  Jump_stmntContext *_localctx = _tracker.createInstance<Jump_stmntContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleJump_stmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__24: {
        _localctx = dynamic_cast<Jump_stmntContext *>(_tracker.createInstance<ExprParser::Jump_stmnt_continueContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(166);
        match(ExprParser::T__24);
        setState(167);
        match(ExprParser::T__19);
        break;
      }

      case ExprParser::T__25: {
        _localctx = dynamic_cast<Jump_stmntContext *>(_tracker.createInstance<ExprParser::Jump_stmnt_breakContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(168);
        match(ExprParser::T__25);
        setState(169);
        match(ExprParser::T__19);
        break;
      }

      case ExprParser::T__26: {
        _localctx = dynamic_cast<Jump_stmntContext *>(_tracker.createInstance<ExprParser::Jump_stmnt_returnContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(170);
        match(ExprParser::T__26);
        setState(171);
        expression_stmnt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

ExprParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Statement_listContext::getRuleIndex() const {
  return ExprParser::RuleStatement_list;
}

void ExprParser::Statement_listContext::copyFrom(Statement_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_list_statementContext ------------------------------------------------------------------

ExprParser::StatementContext* ExprParser::Statement_list_statementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

ExprParser::Statement_list_statementContext::Statement_list_statementContext(Statement_listContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_list_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_list_statement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_list_list_stmntContext ------------------------------------------------------------------

ExprParser::Statement_listContext* ExprParser::Statement_list_list_stmntContext::statement_list() {
  return getRuleContext<ExprParser::Statement_listContext>(0);
}

ExprParser::StatementContext* ExprParser::Statement_list_list_stmntContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

ExprParser::Statement_list_list_stmntContext::Statement_list_list_stmntContext(Statement_listContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_list_list_stmntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_list_list_stmnt(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Statement_listContext* ExprParser::statement_list() {
   return statement_list(0);
}

ExprParser::Statement_listContext* ExprParser::statement_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, parentState);
  ExprParser::Statement_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, ExprParser::RuleStatement_list, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Statement_list_statementContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(175);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(181);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Statement_list_list_stmntContext>(_tracker.createInstance<Statement_listContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleStatement_list);
        setState(177);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(178);
        statement(); 
      }
      setState(183);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

ExprParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::DatatypeContext::getRuleIndex() const {
  return ExprParser::RuleDatatype;
}

void ExprParser::DatatypeContext::copyFrom(DatatypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Datatype_charContext ------------------------------------------------------------------

ExprParser::Datatype_charContext::Datatype_charContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Datatype_charContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatatype_char(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Datatype_intContext ------------------------------------------------------------------

ExprParser::Datatype_intContext::Datatype_intContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Datatype_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatatype_int(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Datatype_voidContext ------------------------------------------------------------------

ExprParser::Datatype_voidContext::Datatype_voidContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Datatype_voidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatatype_void(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Datatype_boolContext ------------------------------------------------------------------

ExprParser::Datatype_boolContext::Datatype_boolContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Datatype_boolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatatype_bool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Datatype_uintContext ------------------------------------------------------------------

ExprParser::Datatype_uintContext::Datatype_uintContext(DatatypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Datatype_uintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatatype_uint(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::DatatypeContext* ExprParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleDatatype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__27: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<ExprParser::Datatype_intContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(184);
        match(ExprParser::T__27);
        break;
      }

      case ExprParser::T__28: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<ExprParser::Datatype_uintContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(185);
        match(ExprParser::T__28);
        break;
      }

      case ExprParser::T__29: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<ExprParser::Datatype_charContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(186);
        match(ExprParser::T__29);
        break;
      }

      case ExprParser::T__30: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<ExprParser::Datatype_boolContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(187);
        match(ExprParser::T__30);
        break;
      }

      case ExprParser::T__31: {
        _localctx = dynamic_cast<DatatypeContext *>(_tracker.createInstance<ExprParser::Datatype_voidContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(188);
        match(ExprParser::T__31);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

ExprParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ArrayContext::getRuleIndex() const {
  return ExprParser::RuleArray;
}

void ExprParser::ArrayContext::copyFrom(ArrayContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Array_2dContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Array_2dContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::Array_2dContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Array_2dContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Array_2dContext::Array_2dContext(ArrayContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Array_2dContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray_2d(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Array_1dContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Array_1dContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::ExpressionContext* ExprParser::Array_1dContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Array_1dContext::Array_1dContext(ArrayContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Array_1dContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray_1d(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::ArrayContext* ExprParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleArray);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ArrayContext *>(_tracker.createInstance<ExprParser::Array_1dContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(191);
      match(ExprParser::IDENTIFIER);
      setState(192);
      match(ExprParser::T__32);
      setState(193);
      expression(0);
      setState(194);
      match(ExprParser::T__33);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ArrayContext *>(_tracker.createInstance<ExprParser::Array_2dContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(196);
      match(ExprParser::IDENTIFIER);
      setState(197);
      match(ExprParser::T__32);
      setState(198);
      expression(0);
      setState(199);
      match(ExprParser::T__34);
      setState(200);
      expression(0);
      setState(201);
      match(ExprParser::T__33);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_declContext ------------------------------------------------------------------

ExprParser::Arg_declContext::Arg_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Arg_declContext::getRuleIndex() const {
  return ExprParser::RuleArg_decl;
}

void ExprParser::Arg_declContext::copyFrom(Arg_declContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Arg_decl_dtIDContext ------------------------------------------------------------------

ExprParser::DatatypeContext* ExprParser::Arg_decl_dtIDContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

tree::TerminalNode* ExprParser::Arg_decl_dtIDContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::Arg_decl_dtIDContext::Arg_decl_dtIDContext(Arg_declContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Arg_decl_dtIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArg_decl_dtID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Arg_decl_emptyContext ------------------------------------------------------------------

ExprParser::Arg_decl_emptyContext::Arg_decl_emptyContext(Arg_declContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Arg_decl_emptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArg_decl_empty(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Arg_declContext* ExprParser::arg_decl() {
  Arg_declContext *_localctx = _tracker.createInstance<Arg_declContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleArg_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Arg_declContext *>(_tracker.createInstance<ExprParser::Arg_decl_dtIDContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(205);
      datatype();
      setState(206);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Arg_declContext *>(_tracker.createInstance<ExprParser::Arg_decl_emptyContext>(_localctx));
      enterOuterAlt(_localctx, 2);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializationContext ------------------------------------------------------------------

ExprParser::InitializationContext::InitializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::InitializationContext::getRuleIndex() const {
  return ExprParser::RuleInitialization;
}

void ExprParser::InitializationContext::copyFrom(InitializationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Initialization_exprContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Initialization_exprContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Initialization_exprContext::Initialization_exprContext(InitializationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Initialization_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInitialization_expr(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::InitializationContext* ExprParser::initialization() {
  InitializationContext *_localctx = _tracker.createInstance<InitializationContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleInitialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<InitializationContext *>(_tracker.createInstance<ExprParser::Initialization_exprContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(211);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclinfoContext ------------------------------------------------------------------

ExprParser::DeclinfoContext::DeclinfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::DeclinfoContext::getRuleIndex() const {
  return ExprParser::RuleDeclinfo;
}

void ExprParser::DeclinfoContext::copyFrom(DeclinfoContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Declinfo_array_1dContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Declinfo_array_1dContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::ExpressionContext* ExprParser::Declinfo_array_1dContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Declinfo_array_1dContext::Declinfo_array_1dContext(DeclinfoContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Declinfo_array_1dContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclinfo_array_1d(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declinfo_idContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Declinfo_idContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::Declinfo_idContext::Declinfo_idContext(DeclinfoContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Declinfo_idContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclinfo_id(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declinfo_id_initContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Declinfo_id_initContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::InitializationContext* ExprParser::Declinfo_id_initContext::initialization() {
  return getRuleContext<ExprParser::InitializationContext>(0);
}

ExprParser::Declinfo_id_initContext::Declinfo_id_initContext(DeclinfoContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Declinfo_id_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclinfo_id_init(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declinfo_array_2dContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Declinfo_array_2dContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::Declinfo_array_2dContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::Declinfo_array_2dContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

ExprParser::Declinfo_array_2dContext::Declinfo_array_2dContext(DeclinfoContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Declinfo_array_2dContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclinfo_array_2d(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::DeclinfoContext* ExprParser::declinfo() {
  DeclinfoContext *_localctx = _tracker.createInstance<DeclinfoContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleDeclinfo);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclinfoContext *>(_tracker.createInstance<ExprParser::Declinfo_idContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(213);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclinfoContext *>(_tracker.createInstance<ExprParser::Declinfo_id_initContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(214);
      match(ExprParser::IDENTIFIER);
      setState(215);
      match(ExprParser::T__15);
      setState(216);
      initialization();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclinfoContext *>(_tracker.createInstance<ExprParser::Declinfo_array_1dContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(217);
      match(ExprParser::IDENTIFIER);
      setState(218);
      match(ExprParser::T__32);
      setState(219);
      expression(0);
      setState(220);
      match(ExprParser::T__33);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<DeclinfoContext *>(_tracker.createInstance<ExprParser::Declinfo_array_2dContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(222);
      match(ExprParser::IDENTIFIER);
      setState(223);
      match(ExprParser::T__32);
      setState(224);
      expression(0);
      setState(225);
      match(ExprParser::T__34);
      setState(226);
      expression(0);
      setState(227);
      match(ExprParser::T__33);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclistContext ------------------------------------------------------------------

ExprParser::DeclistContext::DeclistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::DeclistContext::getRuleIndex() const {
  return ExprParser::RuleDeclist;
}

void ExprParser::DeclistContext::copyFrom(DeclistContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Declist_list_infoContext ------------------------------------------------------------------

ExprParser::DeclistContext* ExprParser::Declist_list_infoContext::declist() {
  return getRuleContext<ExprParser::DeclistContext>(0);
}

ExprParser::DeclinfoContext* ExprParser::Declist_list_infoContext::declinfo() {
  return getRuleContext<ExprParser::DeclinfoContext>(0);
}

ExprParser::Declist_list_infoContext::Declist_list_infoContext(DeclistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Declist_list_infoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclist_list_info(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declist_declinfoContext ------------------------------------------------------------------

ExprParser::DeclinfoContext* ExprParser::Declist_declinfoContext::declinfo() {
  return getRuleContext<ExprParser::DeclinfoContext>(0);
}

ExprParser::Declist_declinfoContext::Declist_declinfoContext(DeclistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Declist_declinfoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclist_declinfo(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DeclistContext* ExprParser::declist() {
   return declist(0);
}

ExprParser::DeclistContext* ExprParser::declist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::DeclistContext *_localctx = _tracker.createInstance<DeclistContext>(_ctx, parentState);
  ExprParser::DeclistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, ExprParser::RuleDeclist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Declist_declinfoContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(232);
    declinfo();
    _ctx->stop = _input->LT(-1);
    setState(239);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Declist_list_infoContext>(_tracker.createInstance<DeclistContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleDeclist);
        setState(234);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(235);
        match(ExprParser::T__35);
        setState(236);
        declinfo(); 
      }
      setState(241);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

ExprParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Parameter_listContext::getRuleIndex() const {
  return ExprParser::RuleParameter_list;
}

void ExprParser::Parameter_listContext::copyFrom(Parameter_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Parameter_decl_data_expressionContext ------------------------------------------------------------------

ExprParser::DatatypeContext* ExprParser::Parameter_decl_data_expressionContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

ExprParser::DeclistContext* ExprParser::Parameter_decl_data_expressionContext::declist() {
  return getRuleContext<ExprParser::DeclistContext>(0);
}

ExprParser::Parameter_decl_data_expressionContext::Parameter_decl_data_expressionContext(Parameter_listContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Parameter_decl_data_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParameter_decl_data_expression(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Parameter_listContext* ExprParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleParameter_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Parameter_listContext *>(_tracker.createInstance<ExprParser::Parameter_decl_data_expressionContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(242);
    datatype();
    setState(243);
    declist(0);
    setState(244);
    match(ExprParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_param_listContext ------------------------------------------------------------------

ExprParser::Local_param_listContext::Local_param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Local_param_listContext::getRuleIndex() const {
  return ExprParser::RuleLocal_param_list;
}

void ExprParser::Local_param_listContext::copyFrom(Local_param_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Local_param_list_data_listContext ------------------------------------------------------------------

ExprParser::DatatypeContext* ExprParser::Local_param_list_data_listContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

ExprParser::DeclistContext* ExprParser::Local_param_list_data_listContext::declist() {
  return getRuleContext<ExprParser::DeclistContext>(0);
}

ExprParser::Local_param_list_data_listContext::Local_param_list_data_listContext(Local_param_listContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Local_param_list_data_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLocal_param_list_data_list(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Local_param_listContext* ExprParser::local_param_list() {
  Local_param_listContext *_localctx = _tracker.createInstance<Local_param_listContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleLocal_param_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Local_param_listContext *>(_tracker.createInstance<ExprParser::Local_param_list_data_listContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(246);
    datatype();
    setState(247);
    declist(0);
    setState(248);
    match(ExprParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_argsContext ------------------------------------------------------------------

ExprParser::Function_argsContext::Function_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Function_argsContext::getRuleIndex() const {
  return ExprParser::RuleFunction_args;
}

void ExprParser::Function_argsContext::copyFrom(Function_argsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Function_args_argdeclContext ------------------------------------------------------------------

ExprParser::Arg_declContext* ExprParser::Function_args_argdeclContext::arg_decl() {
  return getRuleContext<ExprParser::Arg_declContext>(0);
}

ExprParser::Function_args_argdeclContext::Function_args_argdeclContext(Function_argsContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Function_args_argdeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction_args_argdecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Function_args_args_argdeclContext ------------------------------------------------------------------

ExprParser::Function_argsContext* ExprParser::Function_args_args_argdeclContext::function_args() {
  return getRuleContext<ExprParser::Function_argsContext>(0);
}

ExprParser::Arg_declContext* ExprParser::Function_args_args_argdeclContext::arg_decl() {
  return getRuleContext<ExprParser::Arg_declContext>(0);
}

ExprParser::Function_args_args_argdeclContext::Function_args_args_argdeclContext(Function_argsContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Function_args_args_argdeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunction_args_args_argdecl(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Function_argsContext* ExprParser::function_args() {
   return function_args(0);
}

ExprParser::Function_argsContext* ExprParser::function_args(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::Function_argsContext *_localctx = _tracker.createInstance<Function_argsContext>(_ctx, parentState);
  ExprParser::Function_argsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, ExprParser::RuleFunction_args, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Function_args_argdeclContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(251);
    arg_decl();
    _ctx->stop = _input->LT(-1);
    setState(258);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Function_args_args_argdeclContext>(_tracker.createInstance<Function_argsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleFunction_args);
        setState(253);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(254);
        match(ExprParser::T__35);
        setState(255);
        arg_decl(); 
      }
      setState(260);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdlistContext ------------------------------------------------------------------

ExprParser::IdlistContext::IdlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::IdlistContext::getRuleIndex() const {
  return ExprParser::RuleIdlist;
}

void ExprParser::IdlistContext::copyFrom(IdlistContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Idlist_expressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext* ExprParser::Idlist_expressionContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Idlist_expressionContext::Idlist_expressionContext(IdlistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Idlist_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIdlist_expression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Idlist_list_exprContext ------------------------------------------------------------------

ExprParser::IdlistContext* ExprParser::Idlist_list_exprContext::idlist() {
  return getRuleContext<ExprParser::IdlistContext>(0);
}

ExprParser::ExpressionContext* ExprParser::Idlist_list_exprContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::Idlist_list_exprContext::Idlist_list_exprContext(IdlistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Idlist_list_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIdlist_list_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Idlist_emptyContext ------------------------------------------------------------------

ExprParser::Idlist_emptyContext::Idlist_emptyContext(IdlistContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Idlist_emptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIdlist_empty(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IdlistContext* ExprParser::idlist() {
   return idlist(0);
}

ExprParser::IdlistContext* ExprParser::idlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::IdlistContext *_localctx = _tracker.createInstance<IdlistContext>(_ctx, parentState);
  ExprParser::IdlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, ExprParser::RuleIdlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Idlist_expressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(262);
      expression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Idlist_emptyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Idlist_list_exprContext>(_tracker.createInstance<IdlistContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleIdlist);
        setState(266);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(267);
        match(ExprParser::T__35);
        setState(268);
        expression(0); 
      }
      setState(273);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Func_defContext ------------------------------------------------------------------

ExprParser::Func_defContext::Func_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Func_defContext::getRuleIndex() const {
  return ExprParser::RuleFunc_def;
}

void ExprParser::Func_defContext::copyFrom(Func_defContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Func_def_definitionContext ------------------------------------------------------------------

ExprParser::DatatypeContext* ExprParser::Func_def_definitionContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

tree::TerminalNode* ExprParser::Func_def_definitionContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::Function_argsContext* ExprParser::Func_def_definitionContext::function_args() {
  return getRuleContext<ExprParser::Function_argsContext>(0);
}

ExprParser::Compound_stmntContext* ExprParser::Func_def_definitionContext::compound_stmnt() {
  return getRuleContext<ExprParser::Compound_stmntContext>(0);
}

ExprParser::Func_def_definitionContext::Func_def_definitionContext(Func_defContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Func_def_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunc_def_definition(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Func_defContext* ExprParser::func_def() {
  Func_defContext *_localctx = _tracker.createInstance<Func_defContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleFunc_def);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Func_defContext *>(_tracker.createInstance<ExprParser::Func_def_definitionContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(274);
    datatype();
    setState(275);
    match(ExprParser::IDENTIFIER);
    setState(276);
    match(ExprParser::T__0);
    setState(277);
    function_args(0);
    setState(278);
    match(ExprParser::T__1);
    setState(279);
    compound_stmnt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

ExprParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Func_callContext::getRuleIndex() const {
  return ExprParser::RuleFunc_call;
}

void ExprParser::Func_callContext::copyFrom(Func_callContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Func_call_calledContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Func_call_calledContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::IdlistContext* ExprParser::Func_call_calledContext::idlist() {
  return getRuleContext<ExprParser::IdlistContext>(0);
}

ExprParser::Func_call_calledContext::Func_call_calledContext(Func_callContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Func_call_calledContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunc_call_called(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Func_callContext* ExprParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleFunc_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Func_callContext *>(_tracker.createInstance<ExprParser::Func_call_calledContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(ExprParser::IDENTIFIER);
    setState(282);
    match(ExprParser::T__0);
    setState(283);
    idlist(0);
    setState(284);
    match(ExprParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmntContext ------------------------------------------------------------------

ExprParser::Compound_stmntContext::Compound_stmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Compound_stmntContext::getRuleIndex() const {
  return ExprParser::RuleCompound_stmnt;
}

void ExprParser::Compound_stmntContext::copyFrom(Compound_stmntContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Compound_stmnt_blankContext ------------------------------------------------------------------

ExprParser::Compound_stmnt_blankContext::Compound_stmnt_blankContext(Compound_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Compound_stmnt_blankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCompound_stmnt_blank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compound_stmnt_listContext ------------------------------------------------------------------

ExprParser::Statement_listContext* ExprParser::Compound_stmnt_listContext::statement_list() {
  return getRuleContext<ExprParser::Statement_listContext>(0);
}

ExprParser::Compound_stmnt_listContext::Compound_stmnt_listContext(Compound_stmntContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Compound_stmnt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCompound_stmnt_list(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Compound_stmntContext* ExprParser::compound_stmnt() {
  Compound_stmntContext *_localctx = _tracker.createInstance<Compound_stmntContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RuleCompound_stmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(292);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Compound_stmntContext *>(_tracker.createInstance<ExprParser::Compound_stmnt_blankContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(286);
      match(ExprParser::T__36);
      setState(287);
      match(ExprParser::T__37);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Compound_stmntContext *>(_tracker.createInstance<ExprParser::Compound_stmnt_listContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(288);
      match(ExprParser::T__36);
      setState(289);
      statement_list(0);
      setState(290);
      match(ExprParser::T__37);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}

void ExprParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Statement_compoundContext ------------------------------------------------------------------

ExprParser::Compound_stmntContext* ExprParser::Statement_compoundContext::compound_stmnt() {
  return getRuleContext<ExprParser::Compound_stmntContext>(0);
}

ExprParser::Statement_compoundContext::Statement_compoundContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_compoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_compound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_selectionContext ------------------------------------------------------------------

ExprParser::Selection_stmntContext* ExprParser::Statement_selectionContext::selection_stmnt() {
  return getRuleContext<ExprParser::Selection_stmntContext>(0);
}

ExprParser::Statement_selectionContext::Statement_selectionContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_selectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_selection(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_localparamlistContext ------------------------------------------------------------------

ExprParser::Local_param_listContext* ExprParser::Statement_localparamlistContext::local_param_list() {
  return getRuleContext<ExprParser::Local_param_listContext>(0);
}

ExprParser::Statement_localparamlistContext::Statement_localparamlistContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_localparamlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_localparamlist(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_iterativeContext ------------------------------------------------------------------

ExprParser::Iterative_stmnntContext* ExprParser::Statement_iterativeContext::iterative_stmnnt() {
  return getRuleContext<ExprParser::Iterative_stmnntContext>(0);
}

ExprParser::Statement_iterativeContext::Statement_iterativeContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_iterativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_iterative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_ternaryContext ------------------------------------------------------------------

ExprParser::Ternary_oprContext* ExprParser::Statement_ternaryContext::ternary_opr() {
  return getRuleContext<ExprParser::Ternary_oprContext>(0);
}

ExprParser::Statement_ternaryContext::Statement_ternaryContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_ternaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_ternary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_expressionContext ------------------------------------------------------------------

ExprParser::Expression_stmntContext* ExprParser::Statement_expressionContext::expression_stmnt() {
  return getRuleContext<ExprParser::Expression_stmntContext>(0);
}

ExprParser::Statement_expressionContext::Statement_expressionContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_expression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Statement_jumpContext ------------------------------------------------------------------

ExprParser::Jump_stmntContext* ExprParser::Statement_jumpContext::jump_stmnt() {
  return getRuleContext<ExprParser::Jump_stmntContext>(0);
}

ExprParser::Statement_jumpContext::Statement_jumpContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Statement_jumpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_jump(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 46, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__20: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_selectionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(294);
        selection_stmnt();
        break;
      }

      case ExprParser::T__22:
      case ExprParser::T__23: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_iterativeContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(295);
        iterative_stmnnt();
        break;
      }

      case ExprParser::T__36: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_compoundContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(296);
        compound_stmnt();
        break;
      }

      case ExprParser::T__0:
      case ExprParser::T__2:
      case ExprParser::T__3:
      case ExprParser::T__19:
      case ExprParser::IDENTIFIER:
      case ExprParser::NUMBER:
      case ExprParser::CHAR:
      case ExprParser::STRING_LITERAL: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_expressionContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(297);
        expression_stmnt();
        break;
      }

      case ExprParser::T__27:
      case ExprParser::T__28:
      case ExprParser::T__29:
      case ExprParser::T__30:
      case ExprParser::T__31: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_localparamlistContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(298);
        local_param_list();
        break;
      }

      case ExprParser::T__24:
      case ExprParser::T__25:
      case ExprParser::T__26: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_jumpContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(299);
        jump_stmnt();
        break;
      }

      case ExprParser::T__16: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::Statement_ternaryContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(300);
        ternary_opr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return interlistSempred(dynamic_cast<InterlistContext *>(context), predicateIndex);
    case 3: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 9: return statement_listSempred(dynamic_cast<Statement_listContext *>(context), predicateIndex);
    case 15: return declistSempred(dynamic_cast<DeclistContext *>(context), predicateIndex);
    case 18: return function_argsSempred(dynamic_cast<Function_argsContext *>(context), predicateIndex);
    case 19: return idlistSempred(dynamic_cast<IdlistContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::interlistSempred(InterlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool ExprParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 2);
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool ExprParser::statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool ExprParser::declistSempred(DeclistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool ExprParser::function_argsSempred(Function_argsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool ExprParser::idlistSempred(IdlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "start", "interlist", "inter", "expression", "ternary_opr", "expression_stmnt", 
  "selection_stmnt", "iterative_stmnnt", "jump_stmnt", "statement_list", 
  "datatype", "array", "arg_decl", "initialization", "declinfo", "declist", 
  "parameter_list", "local_param_list", "function_args", "idlist", "func_def", 
  "func_call", "compound_stmnt", "statement"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'-'", "'!'", "'*'", "'/'", "'+'", "'<='", "'<'", "'>='", 
  "'>'", "'=='", "'!='", "'and'", "'or'", "'='", "'check'", "'yes'", "'no'", 
  "';'", "'if'", "'else'", "'while'", "'for'", "'continue'", "'break'", 
  "'return'", "'int'", "'uint'", "'char'", "'bool'", "'void'", "'['", "']'", 
  "']['", "','", "'{'", "'}'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "IDENTIFIER", "NUMBER", "CHAR", "STRING_LITERAL", "COMMENT", 
  "NS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2e, 0x132, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x42, 0xa, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x53, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x7c, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x7f, 0xb, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x8d, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x99, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa7, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xaf, 
    0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0xb6, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xb9, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc0, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xce, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd4, 0xa, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xe8, 0xa, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0xf0, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xf3, 0xb, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 
    0x14, 0x103, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x106, 0xb, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x10b, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x110, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x113, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x127, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x130, 0xa, 0x19, 0x3, 0x19, 
    0x2, 0x8, 0x4, 0x8, 0x14, 0x20, 0x26, 0x28, 0x1a, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x2, 0x2, 0x2, 0x14a, 
    0x2, 0x32, 0x3, 0x2, 0x2, 0x2, 0x4, 0x35, 0x3, 0x2, 0x2, 0x2, 0x6, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x52, 0x3, 0x2, 0x2, 0x2, 0xa, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x8c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x12, 0xae, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0x16, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x18, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x24, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x28, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x114, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 
    0x5, 0x4, 0x3, 0x2, 0x33, 0x34, 0x7, 0x2, 0x2, 0x3, 0x34, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x36, 0x8, 0x3, 0x1, 0x2, 0x36, 0x37, 0x5, 0x6, 
    0x4, 0x2, 0x37, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0xc, 0x3, 0x2, 
    0x2, 0x39, 0x3b, 0x5, 0x6, 0x4, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x5, 0x22, 0x12, 0x2, 0x40, 0x42, 0x5, 
    0x2a, 0x16, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x7, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x8, 0x5, 0x1, 
    0x2, 0x44, 0x53, 0x7, 0x2a, 0x2, 0x2, 0x45, 0x53, 0x7, 0x29, 0x2, 0x2, 
    0x46, 0x53, 0x7, 0x2c, 0x2, 0x2, 0x47, 0x53, 0x7, 0x2b, 0x2, 0x2, 0x48, 
    0x53, 0x5, 0x18, 0xd, 0x2, 0x49, 0x53, 0x5, 0x2c, 0x17, 0x2, 0x4a, 0x4b, 
    0x7, 0x3, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x8, 0x5, 0x2, 0x4c, 0x4d, 0x7, 
    0x4, 0x2, 0x2, 0x4d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x5, 
    0x2, 0x2, 0x4f, 0x53, 0x5, 0x8, 0x5, 0x11, 0x50, 0x51, 0x7, 0x6, 0x2, 
    0x2, 0x51, 0x53, 0x5, 0x8, 0x5, 0x10, 0x52, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x45, 0x3, 0x2, 0x2, 0x2, 0x52, 0x46, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x52, 0x48, 0x3, 0x2, 0x2, 0x2, 0x52, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x55, 0xc, 0xf, 0x2, 0x2, 0x55, 0x56, 0x7, 0x7, 0x2, 
    0x2, 0x56, 0x7c, 0x5, 0x8, 0x5, 0x10, 0x57, 0x58, 0xc, 0xe, 0x2, 0x2, 
    0x58, 0x59, 0x7, 0x8, 0x2, 0x2, 0x59, 0x7c, 0x5, 0x8, 0x5, 0xf, 0x5a, 
    0x5b, 0xc, 0xd, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x9, 0x2, 0x2, 0x5c, 0x7c, 
    0x5, 0x8, 0x5, 0xe, 0x5d, 0x5e, 0xc, 0xc, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0x5, 0x2, 0x2, 0x5f, 0x7c, 0x5, 0x8, 0x5, 0xd, 0x60, 0x61, 0xc, 0xb, 
    0x2, 0x2, 0x61, 0x62, 0x7, 0xa, 0x2, 0x2, 0x62, 0x7c, 0x5, 0x8, 0x5, 
    0xc, 0x63, 0x64, 0xc, 0xa, 0x2, 0x2, 0x64, 0x65, 0x7, 0xb, 0x2, 0x2, 
    0x65, 0x7c, 0x5, 0x8, 0x5, 0xb, 0x66, 0x67, 0xc, 0x9, 0x2, 0x2, 0x67, 
    0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 0x7c, 0x5, 0x8, 0x5, 0xa, 0x69, 0x6a, 
    0xc, 0x8, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xd, 0x2, 0x2, 0x6b, 0x7c, 0x5, 
    0x8, 0x5, 0x9, 0x6c, 0x6d, 0xc, 0x7, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0xe, 
    0x2, 0x2, 0x6e, 0x7c, 0x5, 0x8, 0x5, 0x8, 0x6f, 0x70, 0xc, 0x6, 0x2, 
    0x2, 0x70, 0x71, 0x7, 0xf, 0x2, 0x2, 0x71, 0x7c, 0x5, 0x8, 0x5, 0x7, 
    0x72, 0x73, 0xc, 0x5, 0x2, 0x2, 0x73, 0x74, 0x7, 0x10, 0x2, 0x2, 0x74, 
    0x7c, 0x5, 0x8, 0x5, 0x6, 0x75, 0x76, 0xc, 0x4, 0x2, 0x2, 0x76, 0x77, 
    0x7, 0x11, 0x2, 0x2, 0x77, 0x7c, 0x5, 0x8, 0x5, 0x5, 0x78, 0x79, 0xc, 
    0x3, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x12, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x8, 
    0x5, 0x3, 0x7b, 0x54, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x60, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x63, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x13, 0x2, 0x2, 0x81, 
    0x82, 0x5, 0x8, 0x5, 0x2, 0x82, 0x83, 0x7, 0x14, 0x2, 0x2, 0x83, 0x84, 
    0x5, 0x8, 0x5, 0x2, 0x84, 0x85, 0x7, 0x15, 0x2, 0x2, 0x85, 0x86, 0x5, 
    0x8, 0x5, 0x2, 0x86, 0x87, 0x7, 0x16, 0x2, 0x2, 0x87, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x8d, 0x7, 0x16, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x8, 0x5, 
    0x2, 0x8a, 0x8b, 0x7, 0x16, 0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8d, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x17, 0x2, 0x2, 0x8f, 0x90, 
    0x5, 0x8, 0x5, 0x2, 0x90, 0x91, 0x5, 0x2e, 0x18, 0x2, 0x91, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x17, 0x2, 0x2, 0x93, 0x94, 0x5, 0x8, 
    0x5, 0x2, 0x94, 0x95, 0x5, 0x2e, 0x18, 0x2, 0x95, 0x96, 0x7, 0x18, 0x2, 
    0x2, 0x96, 0x97, 0x5, 0x2e, 0x18, 0x2, 0x97, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x98, 0x92, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x19, 0x2, 0x2, 0x9b, 0x9c, 
    0x5, 0x8, 0x5, 0x2, 0x9c, 0x9d, 0x5, 0x2e, 0x18, 0x2, 0x9d, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x1a, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x3, 
    0x2, 0x2, 0xa0, 0xa1, 0x5, 0x24, 0x13, 0x2, 0xa1, 0xa2, 0x5, 0xc, 0x7, 
    0x2, 0xa2, 0xa3, 0x5, 0x8, 0x5, 0x2, 0xa3, 0xa4, 0x7, 0x4, 0x2, 0x2, 
    0xa4, 0xa5, 0x5, 0x2e, 0x18, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x1b, 0x2, 0x2, 0xa9, 0xaf, 0x7, 
    0x16, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x1c, 0x2, 0x2, 0xab, 0xaf, 0x7, 0x16, 
    0x2, 0x2, 0xac, 0xad, 0x7, 0x1d, 0x2, 0x2, 0xad, 0xaf, 0x5, 0xc, 0x7, 
    0x2, 0xae, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb1, 0x8, 0xb, 0x1, 0x2, 0xb1, 0xb2, 0x5, 0x30, 0x19, 0x2, 0xb2, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0xc, 0x3, 0x2, 0x2, 0xb4, 0xb6, 0x5, 
    0x30, 0x19, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0xc0, 0x7, 0x1e, 0x2, 0x2, 0xbb, 0xc0, 0x7, 0x1f, 0x2, 0x2, 0xbc, 
    0xc0, 0x7, 0x20, 0x2, 0x2, 0xbd, 0xc0, 0x7, 0x21, 0x2, 0x2, 0xbe, 0xc0, 
    0x7, 0x22, 0x2, 0x2, 0xbf, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0x7, 0x29, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x23, 0x2, 0x2, 
    0xc3, 0xc4, 0x5, 0x8, 0x5, 0x2, 0xc4, 0xc5, 0x7, 0x24, 0x2, 0x2, 0xc5, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x29, 0x2, 0x2, 0xc7, 0xc8, 
    0x7, 0x23, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x8, 0x5, 0x2, 0xc9, 0xca, 0x7, 
    0x25, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x8, 0x5, 0x2, 0xcb, 0xcc, 0x7, 0x24, 
    0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xce, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xd0, 0x5, 0x16, 0xc, 0x2, 0xd0, 0xd1, 0x7, 0x29, 0x2, 0x2, 0xd1, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x8, 0x5, 0x2, 0xd6, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xe8, 0x7, 0x29, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x29, 0x2, 
    0x2, 0xd9, 0xda, 0x7, 0x12, 0x2, 0x2, 0xda, 0xe8, 0x5, 0x1c, 0xf, 0x2, 
    0xdb, 0xdc, 0x7, 0x29, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x23, 0x2, 0x2, 0xdd, 
    0xde, 0x5, 0x8, 0x5, 0x2, 0xde, 0xdf, 0x7, 0x24, 0x2, 0x2, 0xdf, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x29, 0x2, 0x2, 0xe1, 0xe2, 0x7, 
    0x23, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x8, 0x5, 0x2, 0xe3, 0xe4, 0x7, 0x25, 
    0x2, 0x2, 0xe4, 0xe5, 0x5, 0x8, 0x5, 0x2, 0xe5, 0xe6, 0x7, 0x24, 0x2, 
    0x2, 0xe6, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 
    0x8, 0x11, 0x1, 0x2, 0xea, 0xeb, 0x5, 0x1e, 0x10, 0x2, 0xeb, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xed, 0xc, 0x3, 0x2, 0x2, 0xed, 0xee, 0x7, 0x26, 
    0x2, 0x2, 0xee, 0xf0, 0x5, 0x1e, 0x10, 0x2, 0xef, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x16, 0xc, 0x2, 0xf5, 0xf6, 
    0x5, 0x20, 0x11, 0x2, 0xf6, 0xf7, 0x7, 0x16, 0x2, 0x2, 0xf7, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x16, 0xc, 0x2, 0xf9, 0xfa, 0x5, 0x20, 
    0x11, 0x2, 0xfa, 0xfb, 0x7, 0x16, 0x2, 0x2, 0xfb, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0x8, 0x14, 0x1, 0x2, 0xfd, 0xfe, 0x5, 0x1a, 0xe, 0x2, 
    0xfe, 0x104, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0xc, 0x3, 0x2, 0x2, 0x100, 
    0x101, 0x7, 0x26, 0x2, 0x2, 0x101, 0x103, 0x5, 0x1a, 0xe, 0x2, 0x102, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x8, 
    0x15, 0x1, 0x2, 0x108, 0x10b, 0x5, 0x8, 0x5, 0x2, 0x109, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0x111, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0xc, 
    0x4, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x26, 0x2, 0x2, 0x10e, 0x110, 0x5, 
    0x8, 0x5, 0x2, 0x10f, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x29, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x115, 0x5, 0x16, 0xc, 0x2, 0x115, 0x116, 0x7, 0x29, 
    0x2, 0x2, 0x116, 0x117, 0x7, 0x3, 0x2, 0x2, 0x117, 0x118, 0x5, 0x26, 
    0x14, 0x2, 0x118, 0x119, 0x7, 0x4, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x2e, 
    0x18, 0x2, 0x11a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x29, 
    0x2, 0x2, 0x11c, 0x11d, 0x7, 0x3, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x28, 
    0x15, 0x2, 0x11e, 0x11f, 0x7, 0x4, 0x2, 0x2, 0x11f, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x121, 0x7, 0x27, 0x2, 0x2, 0x121, 0x127, 0x7, 0x28, 
    0x2, 0x2, 0x122, 0x123, 0x7, 0x27, 0x2, 0x2, 0x123, 0x124, 0x5, 0x14, 
    0xb, 0x2, 0x124, 0x125, 0x7, 0x28, 0x2, 0x2, 0x125, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x120, 0x3, 0x2, 0x2, 0x2, 0x126, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x128, 0x130, 0x5, 0xe, 0x8, 
    0x2, 0x129, 0x130, 0x5, 0x10, 0x9, 0x2, 0x12a, 0x130, 0x5, 0x2e, 0x18, 
    0x2, 0x12b, 0x130, 0x5, 0xc, 0x7, 0x2, 0x12c, 0x130, 0x5, 0x24, 0x13, 
    0x2, 0x12d, 0x130, 0x5, 0x12, 0xa, 0x2, 0x12e, 0x130, 0x5, 0xa, 0x6, 
    0x2, 0x12f, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x3c, 0x41, 0x52, 0x7b, 0x7d, 0x8c, 0x98, 0xa6, 0xae, 0xb7, 0xbf, 
    0xcd, 0xd3, 0xe7, 0xf1, 0x104, 0x10a, 0x111, 0x126, 0x12f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
