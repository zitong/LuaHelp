
// Generated from Lua.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "LuaListener.h"


/**
 * This class provides an empty implementation of LuaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LuaBaseListener : public LuaListener {
public:

  virtual void enterChunk(LuaParser::ChunkContext * /*ctx*/) override { }
  virtual void exitChunk(LuaParser::ChunkContext * /*ctx*/) override { }

  virtual void enterBlock(LuaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(LuaParser::BlockContext * /*ctx*/) override { }

  virtual void enterStat(LuaParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(LuaParser::StatContext * /*ctx*/) override { }

  virtual void enterVarDecl(LuaParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(LuaParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterFunctioncall(LuaParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(LuaParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterGotoStat(LuaParser::GotoStatContext * /*ctx*/) override { }
  virtual void exitGotoStat(LuaParser::GotoStatContext * /*ctx*/) override { }

  virtual void enterDoStat(LuaParser::DoStatContext * /*ctx*/) override { }
  virtual void exitDoStat(LuaParser::DoStatContext * /*ctx*/) override { }

  virtual void enterWhileStat(LuaParser::WhileStatContext * /*ctx*/) override { }
  virtual void exitWhileStat(LuaParser::WhileStatContext * /*ctx*/) override { }

  virtual void enterRepeatStat(LuaParser::RepeatStatContext * /*ctx*/) override { }
  virtual void exitRepeatStat(LuaParser::RepeatStatContext * /*ctx*/) override { }

  virtual void enterIfStat(LuaParser::IfStatContext * /*ctx*/) override { }
  virtual void exitIfStat(LuaParser::IfStatContext * /*ctx*/) override { }

  virtual void enterForStat(LuaParser::ForStatContext * /*ctx*/) override { }
  virtual void exitForStat(LuaParser::ForStatContext * /*ctx*/) override { }

  virtual void enterForInStat(LuaParser::ForInStatContext * /*ctx*/) override { }
  virtual void exitForInStat(LuaParser::ForInStatContext * /*ctx*/) override { }

  virtual void enterFuncStat(LuaParser::FuncStatContext * /*ctx*/) override { }
  virtual void exitFuncStat(LuaParser::FuncStatContext * /*ctx*/) override { }

  virtual void enterLocalFuncStat(LuaParser::LocalFuncStatContext * /*ctx*/) override { }
  virtual void exitLocalFuncStat(LuaParser::LocalFuncStatContext * /*ctx*/) override { }

  virtual void enterLocalVarDecl(LuaParser::LocalVarDeclContext * /*ctx*/) override { }
  virtual void exitLocalVarDecl(LuaParser::LocalVarDeclContext * /*ctx*/) override { }

  virtual void enterRetstat(LuaParser::RetstatContext * /*ctx*/) override { }
  virtual void exitRetstat(LuaParser::RetstatContext * /*ctx*/) override { }

  virtual void enterLabel(LuaParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(LuaParser::LabelContext * /*ctx*/) override { }

  virtual void enterFuncname(LuaParser::FuncnameContext * /*ctx*/) override { }
  virtual void exitFuncname(LuaParser::FuncnameContext * /*ctx*/) override { }

  virtual void enterVarlist(LuaParser::VarlistContext * /*ctx*/) override { }
  virtual void exitVarlist(LuaParser::VarlistContext * /*ctx*/) override { }

  virtual void enterNamelist(LuaParser::NamelistContext * /*ctx*/) override { }
  virtual void exitNamelist(LuaParser::NamelistContext * /*ctx*/) override { }

  virtual void enterExplist(LuaParser::ExplistContext * /*ctx*/) override { }
  virtual void exitExplist(LuaParser::ExplistContext * /*ctx*/) override { }

  virtual void enterExp(LuaParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(LuaParser::ExpContext * /*ctx*/) override { }

  virtual void enterPrefixexp(LuaParser::PrefixexpContext * /*ctx*/) override { }
  virtual void exitPrefixexp(LuaParser::PrefixexpContext * /*ctx*/) override { }

  virtual void enterVarOrExp(LuaParser::VarOrExpContext * /*ctx*/) override { }
  virtual void exitVarOrExp(LuaParser::VarOrExpContext * /*ctx*/) override { }

  virtual void enterVar(LuaParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(LuaParser::VarContext * /*ctx*/) override { }

  virtual void enterVarSuffix(LuaParser::VarSuffixContext * /*ctx*/) override { }
  virtual void exitVarSuffix(LuaParser::VarSuffixContext * /*ctx*/) override { }

  virtual void enterNameAndArgs(LuaParser::NameAndArgsContext * /*ctx*/) override { }
  virtual void exitNameAndArgs(LuaParser::NameAndArgsContext * /*ctx*/) override { }

  virtual void enterArgs(LuaParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(LuaParser::ArgsContext * /*ctx*/) override { }

  virtual void enterFunctiondef(LuaParser::FunctiondefContext * /*ctx*/) override { }
  virtual void exitFunctiondef(LuaParser::FunctiondefContext * /*ctx*/) override { }

  virtual void enterFuncbody(LuaParser::FuncbodyContext * /*ctx*/) override { }
  virtual void exitFuncbody(LuaParser::FuncbodyContext * /*ctx*/) override { }

  virtual void enterParlist(LuaParser::ParlistContext * /*ctx*/) override { }
  virtual void exitParlist(LuaParser::ParlistContext * /*ctx*/) override { }

  virtual void enterTableconstructor(LuaParser::TableconstructorContext * /*ctx*/) override { }
  virtual void exitTableconstructor(LuaParser::TableconstructorContext * /*ctx*/) override { }

  virtual void enterFieldlist(LuaParser::FieldlistContext * /*ctx*/) override { }
  virtual void exitFieldlist(LuaParser::FieldlistContext * /*ctx*/) override { }

  virtual void enterField(LuaParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(LuaParser::FieldContext * /*ctx*/) override { }

  virtual void enterFieldsep(LuaParser::FieldsepContext * /*ctx*/) override { }
  virtual void exitFieldsep(LuaParser::FieldsepContext * /*ctx*/) override { }

  virtual void enterLinkOperator(LuaParser::LinkOperatorContext * /*ctx*/) override { }
  virtual void exitLinkOperator(LuaParser::LinkOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(LuaParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(LuaParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterNumber(LuaParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(LuaParser::NumberContext * /*ctx*/) override { }

  virtual void enterString(LuaParser::StringContext * /*ctx*/) override { }
  virtual void exitString(LuaParser::StringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

