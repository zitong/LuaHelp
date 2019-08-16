
// Generated from Lua.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "LuaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LuaParser.
 */
class  LuaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterChunk(LuaParser::ChunkContext *ctx) = 0;
  virtual void exitChunk(LuaParser::ChunkContext *ctx) = 0;

  virtual void enterBlock(LuaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(LuaParser::BlockContext *ctx) = 0;

  virtual void enterStat(LuaParser::StatContext *ctx) = 0;
  virtual void exitStat(LuaParser::StatContext *ctx) = 0;

  virtual void enterVarDecl(LuaParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(LuaParser::VarDeclContext *ctx) = 0;

  virtual void enterFunctioncall(LuaParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(LuaParser::FunctioncallContext *ctx) = 0;

  virtual void enterGotoStat(LuaParser::GotoStatContext *ctx) = 0;
  virtual void exitGotoStat(LuaParser::GotoStatContext *ctx) = 0;

  virtual void enterDoStat(LuaParser::DoStatContext *ctx) = 0;
  virtual void exitDoStat(LuaParser::DoStatContext *ctx) = 0;

  virtual void enterWhileStat(LuaParser::WhileStatContext *ctx) = 0;
  virtual void exitWhileStat(LuaParser::WhileStatContext *ctx) = 0;

  virtual void enterRepeatStat(LuaParser::RepeatStatContext *ctx) = 0;
  virtual void exitRepeatStat(LuaParser::RepeatStatContext *ctx) = 0;

  virtual void enterIfStat(LuaParser::IfStatContext *ctx) = 0;
  virtual void exitIfStat(LuaParser::IfStatContext *ctx) = 0;

  virtual void enterForStat(LuaParser::ForStatContext *ctx) = 0;
  virtual void exitForStat(LuaParser::ForStatContext *ctx) = 0;

  virtual void enterForInStat(LuaParser::ForInStatContext *ctx) = 0;
  virtual void exitForInStat(LuaParser::ForInStatContext *ctx) = 0;

  virtual void enterFuncStat(LuaParser::FuncStatContext *ctx) = 0;
  virtual void exitFuncStat(LuaParser::FuncStatContext *ctx) = 0;

  virtual void enterLocalFuncStat(LuaParser::LocalFuncStatContext *ctx) = 0;
  virtual void exitLocalFuncStat(LuaParser::LocalFuncStatContext *ctx) = 0;

  virtual void enterLocalVarDecl(LuaParser::LocalVarDeclContext *ctx) = 0;
  virtual void exitLocalVarDecl(LuaParser::LocalVarDeclContext *ctx) = 0;

  virtual void enterRetstat(LuaParser::RetstatContext *ctx) = 0;
  virtual void exitRetstat(LuaParser::RetstatContext *ctx) = 0;

  virtual void enterLabel(LuaParser::LabelContext *ctx) = 0;
  virtual void exitLabel(LuaParser::LabelContext *ctx) = 0;

  virtual void enterFuncname(LuaParser::FuncnameContext *ctx) = 0;
  virtual void exitFuncname(LuaParser::FuncnameContext *ctx) = 0;

  virtual void enterVarlist(LuaParser::VarlistContext *ctx) = 0;
  virtual void exitVarlist(LuaParser::VarlistContext *ctx) = 0;

  virtual void enterNamelist(LuaParser::NamelistContext *ctx) = 0;
  virtual void exitNamelist(LuaParser::NamelistContext *ctx) = 0;

  virtual void enterExplist(LuaParser::ExplistContext *ctx) = 0;
  virtual void exitExplist(LuaParser::ExplistContext *ctx) = 0;

  virtual void enterExp(LuaParser::ExpContext *ctx) = 0;
  virtual void exitExp(LuaParser::ExpContext *ctx) = 0;

  virtual void enterPrefixexp(LuaParser::PrefixexpContext *ctx) = 0;
  virtual void exitPrefixexp(LuaParser::PrefixexpContext *ctx) = 0;

  virtual void enterVarOrExp(LuaParser::VarOrExpContext *ctx) = 0;
  virtual void exitVarOrExp(LuaParser::VarOrExpContext *ctx) = 0;

  virtual void enterVar(LuaParser::VarContext *ctx) = 0;
  virtual void exitVar(LuaParser::VarContext *ctx) = 0;

  virtual void enterVarSuffix(LuaParser::VarSuffixContext *ctx) = 0;
  virtual void exitVarSuffix(LuaParser::VarSuffixContext *ctx) = 0;

  virtual void enterNameAndArgs(LuaParser::NameAndArgsContext *ctx) = 0;
  virtual void exitNameAndArgs(LuaParser::NameAndArgsContext *ctx) = 0;

  virtual void enterArgs(LuaParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(LuaParser::ArgsContext *ctx) = 0;

  virtual void enterFunctiondef(LuaParser::FunctiondefContext *ctx) = 0;
  virtual void exitFunctiondef(LuaParser::FunctiondefContext *ctx) = 0;

  virtual void enterFuncbody(LuaParser::FuncbodyContext *ctx) = 0;
  virtual void exitFuncbody(LuaParser::FuncbodyContext *ctx) = 0;

  virtual void enterParlist(LuaParser::ParlistContext *ctx) = 0;
  virtual void exitParlist(LuaParser::ParlistContext *ctx) = 0;

  virtual void enterTableconstructor(LuaParser::TableconstructorContext *ctx) = 0;
  virtual void exitTableconstructor(LuaParser::TableconstructorContext *ctx) = 0;

  virtual void enterFieldlist(LuaParser::FieldlistContext *ctx) = 0;
  virtual void exitFieldlist(LuaParser::FieldlistContext *ctx) = 0;

  virtual void enterField(LuaParser::FieldContext *ctx) = 0;
  virtual void exitField(LuaParser::FieldContext *ctx) = 0;

  virtual void enterFieldsep(LuaParser::FieldsepContext *ctx) = 0;
  virtual void exitFieldsep(LuaParser::FieldsepContext *ctx) = 0;

  virtual void enterLinkOperator(LuaParser::LinkOperatorContext *ctx) = 0;
  virtual void exitLinkOperator(LuaParser::LinkOperatorContext *ctx) = 0;

  virtual void enterUnaryOperator(LuaParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(LuaParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterNumber(LuaParser::NumberContext *ctx) = 0;
  virtual void exitNumber(LuaParser::NumberContext *ctx) = 0;

  virtual void enterString(LuaParser::StringContext *ctx) = 0;
  virtual void exitString(LuaParser::StringContext *ctx) = 0;


};

