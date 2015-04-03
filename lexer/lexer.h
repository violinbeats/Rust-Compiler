#ifndef LEXER_H_
#define LEXER_H_

/*This file contains enumerations that matches the ones in lexer.l and frontend.c*/
enum {
	abstractK = 256,
	ALIGNOF,
	asK,
	beK,
	box,
	breakK,
	constK,
	continueK,
	crate,
	doK,
	elseK,
	enumK,
	externK,
	finalK,
	fn,
	forK,
	ifK,
	impl,
	in,
	let,
	loop,
	macro_rules,
	macro,
	match,
	modK,
	move,
	mut,
	offsetof,
	override,
	priv,
	pub,
	pure,
	refK,
	returnK,
	sizeofK,
	staticK,
	self,
	structK,
	super,
	trait,
	typeofK,
	type,
	unsafe,
	unsized,
	use,
	virtual,
	whereK,
	whileK,
	yield,
	boolK,
	u8,
	u16,
	u32,
	u64,
	i8,
	i16,
	i32,
	i64,
	f32,
	f64,
	usize,
	isize,
	charK,
	str,
	LPAREN,
	RPAREN,
	MUL,
	ADD,
	SUB,
	DIV,
	INTDIV,
	QUALIFIER,
	ELEMENTSELECT,
	RARROW,
	POUNDNOT,
	POUND,
	SINGLEQ,
	DOUBELQ,
	DOLLAR,
	LBRACK,
	RBRACK,
	LCBRACK,
	RCBRACK,
	COMMA,
	SEMICOLON,
	DIVEQU,
	REMAINEQU,
	REMAINDER,
	ANDEQU,
	LOGICAND,
	AND,
	OREQU,
	LOGICOR,
	INCLUOR,
	EXCOREQU,
	EXCLUSIVEOR,
	LOGICLEFTSHIFTEQU,
	LOGICLEFTSHIFT,
	LOGICRIGHTSHIFTEQU,
	LOGICRIGHTSHIFT,
	LESSEQU,
	GREATEREQU,
	LESS,
	GREATER,
	ADDEQU,
	SUBEQU,
	MULEQU,
	LOGICEQU,
	NOTEQU,
	EQU,
	TRUE,
	FALSE,
	ID,
	IDERROR,
	UNKNOWN,
	LITCHAR,
	LITSTR,
	LITDEC,
	DECERROR,
};

char* yytext;
int yylex(void);

#endif