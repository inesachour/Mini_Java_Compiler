%{
	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;

%}

%token parenthese_ouvrante 
%token parenthese_fermante
%token accolade_ouvrante
%token accolade_fermante
%token crochet_ouvrant
%token crochet_fermant
%token point_virgule
%token virgule
%token point
%token VISIBILITE_PUBLIC
%token VISIBILITE_PROTECTED
%token VISIBILITE_PRIVATE
%token IF_KEYWORD
%token ELSE_KEYWORD
%token WHILE_KEYWORD
%token NEW_KEYWORD
%token THIS_KEYWORD
%token MAIN_KEYWORD
%token RETURN_KEYWORD
%token CLASS_KEYWORD
%token EXTENDS_KEYWORD
%token STATIC_KEYWORD
%token LENGTH_KEYWORD
%token AFFICHAGE
%token TYPE_INT
%token TYPE_BOOLEAN
%token TYPE_STRING
%token TYPE_VOID
%token Integer
%token IntegerNeg
%token Boolean
%token String
%token OP_AND
%token OP_OR
%token OP_PLUS
%token OP_MOINS
%token OP_MULTIPLICATION
%token OPP_AFFECT
%token OPP_NEG
%token OP_SUP
%token OP_SUP_EG
%token OP_INF
%token OP_INF_EG
%token OP_EG
%token OP_DIFF
%token Identifier
%token COMMENT_LINE
%token COMMENT_MULTI_LINE
%token EndOfFile

 
%error-verbose
%start Program

%%

Program	            :	MainClass classdec;

classdec            :   ClassDeclaration classdec | ;

MainClass	        :	CLASS_KEYWORD ID accolade_ouvrante VISIBILITE_PUBLIC  STATIC_KEYWORD TYPE_VOID MAIN_KEYWORD parenthese_ouvrante TYPE_STRING crochet_ouvrant crochet_fermant ID parenthese_fermante accolade_ouvrante Statement accolade_fermante accolade_fermante;

vardec              :   VarDeclaration vardec | ;

methoddec           : 	MethodDeclaration methoddec | ;

extend_key_id       : 	EXTENDS_KEYWORD ID | ;

ClassDeclaration	:	CLASS_KEYWORD ID extend_key_id accolade_ouvrante vardec methoddec accolade_fermante;
					|	error ID extend_key_id accolade_ouvrante vardec methoddec accolade_fermante           			{yyerror (" class attendu en ligne : "); YYABORT}
					|	CLASS_KEYWORD error extend_key_id accolade_ouvrante vardec methoddec accolade_fermante          {yyerror (" Identifier attendu en ligne : "); YYABORT}
					|	CLASS_KEYWORD ID extend_key_id error vardec methoddec accolade_fermante           				{yyerror (" Accolade ouvrante attendu en ligne : "); YYABORT}
					|	CLASS_KEYWORD ID extend_key_id accolade_ouvrante vardec methoddec error           				{yyerror (" Accolade fermante attendu en ligne : "); YYABORT};


VarDeclaration	    :	Type ID point_virgule
					|	error ID point_virgule            {yyerror (" Type attendu en ligne : "); YYABORT}
					|	Type error point_virgule          {yyerror (" Identifier attendu en ligne : "); YYABORT}
					|	Type ID error            		  {yyerror (" Point virgule attendu en ligne : "); YYABORT};

virgule_type_ID :  virgule Type ID virgule_type_ID | ;

type_ID     : Type ID virgule_type_ID | ;

MethodDeclaration	:	VISIBILITE_PUBLIC Type ID parenthese_ouvrante type_ID parenthese_fermante accolade_ouvrante vardec stat RETURN_KEYWORD Expression point_virgule accolade_fermante;

Type	            :	TYPE_INT crochet_ouvrant crochet_fermant
	                    |	TYPE_BOOLEAN
	                    |	TYPE_INT;
	                    /*|	ID;*/

stat               : Statement stat | ;

Statement	        :	accolade_ouvrante stat accolade_fermante
	                |	IF_KEYWORD parenthese_ouvrante Expression parenthese_fermante Statement ELSE_KEYWORD Statement
	                |	WHILE_KEYWORD parenthese_ouvrante Expression parenthese_fermante Statement
	                |	AFFICHAGE parenthese_ouvrante Expression parenthese_fermante point_virgule
	                |	ID OPP_AFFECT Expression point_virgule
	                |	ID crochet_ouvrant Expression crochet_fermant OPP_AFFECT Expression point_virgule;

op          : OP_AND | OP_INF | OP_PLUS | OP_MOINS | OP_MULTIPLICATION;

Expression	        :	Expression op Expression
	| 	Expression IntegerNeg
	|	Expression crochet_ouvrant Expression crochet_fermant
	|	Expression point LENGTH_KEYWORD
	|	Expression point ID parenthese_ouvrante expr parenthese_fermante
	|	Integer
	|	Boolean
	|	ID
	|	THIS_KEYWORD
	|	NEW_KEYWORD TYPE_INT crochet_ouvrant Expression crochet_fermant
	|	NEW_KEYWORD ID parenthese_ouvrante parenthese_fermante
	|	OPP_NEG Expression
	|	parenthese_ouvrante Expression parenthese_fermante;

virgule_expression  :   virgule Expression virgule_expression | ;

expr    :   Expression virgule_expression | ;

ID : Identifier;



%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
 
}

  
                   
