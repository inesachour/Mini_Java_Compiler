%{
	

#include <stdio.h>	
#include "Semantic.c"
#include "CodeGenerator.c"

extern char *yytext;
int numval;
int boolval;
char nom[256];
char codeMethod[256];
char* opCode;
int indexIf;
int indexWhile1;
int indexWhile2;

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

MainClass	        :	{tabCodeInt[indextab]=creerCode("ENTREE",-1, NULL); indextab++;} CLASS_KEYWORD ID {checkIdentifier(nom, tOther ,class, yylineno);} accolade_ouvrante vardec VISIBILITE_PUBLIC  STATIC_KEYWORD TYPE_VOID MAIN_KEYWORD {tabCodeInt[indextab]=creerCode("ENTREE",-1, "main"); indextab++;} { checkIdentifier("main", tVoid, fonction, yylineno); } parenthese_ouvrante TYPE_STRING crochet_ouvrant crochet_fermant ID {checkIdentifier(nom, tString, parametre, yylineno);} parenthese_fermante accolade_ouvrante vardec stat accolade_fermante {fonctionEnd();} {tabCodeInt[indextab]=creerCode("SORTIE",-1, "main"); indextab++;} accolade_fermante {classEnd();} {tabCodeInt[indextab]=creerCode("SORTIE",-1,NULL); indextab++;};

vardec              :   VarDeclaration vardec | ;

methoddec           : 	MethodDeclaration methoddec | ;

extend_key_id       : 	EXTENDS_KEYWORD ID | ;

ClassDeclaration	:	{tabCodeInt[indextab]=creerCode("ENTREE",-1,NULL); indextab++;} CLASS_KEYWORD ID {checkIdentifier(nom, tOther ,class, yylineno);} extend_key_id accolade_ouvrante vardec methoddec accolade_fermante {classEnd();} {tabCodeInt[indextab]=creerCode("SORTIE",-1,NULL); indextab++;}

VarDeclaration	    :	Type ID {checkIdentifier(nom, type ,variable , yylineno);} point_virgule
					|	error ID point_virgule            {yyerror (" Error : Type attendu en ligne : "); YYABORT}
					|	Type error point_virgule          {yyerror (" Error : Identifier attendu en ligne : "); YYABORT}
					|	Type ID error            		  {yyerror (" Error : Point virgule attendu en ligne : "); YYABORT};

virgule_type_ID :  virgule Type ID {checkIdentifier(nom, type ,variable , yylineno);} virgule_type_ID | ;

type_ID     : Type ID {checkIdentifier(nom, type ,variable , yylineno);} virgule_type_ID | ;

MethodDeclaration	:	VISIBILITE_PUBLIC Type ID {strcpy(codeMethod, nom); tabCodeInt[indextab]=creerCode("ENTREE",-1,codeMethod); indextab++;} {checkIdentifier(nom, type , fonction, yylineno);} parenthese_ouvrante {inParam();} type_ID {outParam();} parenthese_fermante accolade_ouvrante vardec stat RETURN_KEYWORD Expression point_virgule accolade_fermante {tabCodeInt[indextab]=creerCode("SORTIE",-1,codeMethod);indextab++;} {fonctionEnd();};

Type	            :	TYPE_INT crochet_ouvrant crochet_fermant {type=tInt} 
	                    |	TYPE_BOOLEAN {type=tBoolean}
	                    |	TYPE_INT {type=tInt}
						|	TYPE_STRING {type=tString};
	                    /*|	ID;*/

stat               : Statement stat | ;

Statement	        :	accolade_ouvrante stat accolade_fermante
	                |	IF_KEYWORD parenthese_ouvrante Expression parenthese_fermante {tabCodeInt[indextab]=creerCode("SIFAUX",-1,NULL);indexIf=indextab;indextab++;} Statement ELSE_KEYWORD {tabCodeInt[indextab]=creerCode("SAUT",-1,NULL);indextab++;tabCodeInt[indexIf].operande=indextab;indexIf=indextab-1;} Statement {tabCodeInt[indexIf].operande=indextab+1;}
	                |	WHILE_KEYWORD {indexWhile1=indextab;} parenthese_ouvrante Expression parenthese_fermante {tabCodeInt[indextab]=creerCode("TANTQUEFAUX",-1,NULL);indexWhile2=indextab;indextab++;} Statement {tabCodeInt[indextab]=creerCode("TANTQUE",indexWhile1,NULL);indextab++;tabCodeInt[indexWhile2].operande=indextab;}
	                |	AFFICHAGE parenthese_ouvrante Expression parenthese_fermante point_virgule
	                |	ID {verifierVarDeclared(nom, yylineno);} {useVar(nom);} {tabCodeInt[indextab]=creerCode("LDV",getAddress(nom,table_total),NULL);indextab++;} OPP_AFFECT {initVar(nom, yylineno);} Expression {verifierTypeAffectation(nom, typeAffect, yylineno);} point_virgule {tabCodeInt[indextab]=creerCode("STORE",getAddress(nom,table_total),NULL);indextab++;}
	                |	ID crochet_ouvrant Expression crochet_fermant {verifierVarDeclared(nom, yylineno)} {initVar(nom, yylineno);} {useVar(nom);} OPP_AFFECT Expression point_virgule;

op          : OP_AND  {opCode="AND";}
			| OP_INF  {opCode="INF";}
			| OP_PLUS  {opCode="ADD";}
			| OP_MOINS  {opCode="SUB";}
			| OP_MULTIPLICATION  {tabCodeInt[indextab]=creerCode("MUL",-1,NULL);indextab++;};

Expression	        :	Expression op Expression {tabCodeInt[indextab]=creerCode(opCode,-1,NULL);indextab++;}
	| 	Expression IntegerNeg {typeAffect = tInt;}
	|	Expression crochet_ouvrant Expression crochet_fermant
	|	Expression point LENGTH_KEYWORD {fonctionCallParameter(tInt, NULL, yylineno);} {typeAffect = tInt;}
	|	Expression point ID {fonctionCallStart(nom, type, yylineno);} {typeAffect = type;} parenthese_ouvrante expr parenthese_fermante {verifierFonctionArguments(yylineno);} {tabCodeInt[indextab]=creerCode("APPEL",getFonctionLine(nom),NULL);indextab++;}
	|	Integer {fonctionCallParameter(tInt, NULL, yylineno);} {typeAffect = tInt;} {tabCodeInt[indextab]=creerCode("LDC",numval,NULL);indextab++;}
	|	Boolean {fonctionCallParameter(tBoolean, NULL, yylineno);} {typeAffect = tBoolean;} {tabCodeInt[indextab]=creerCode("LDC",boolval,NULL);indextab++;}
	|	String {fonctionCallParameter(tString, NULL, yylineno);} {typeAffect = tString;}
	|	ID {(verifierVarDeclared(nom, yylineno));} {verifierVarInitialise(nom, yylineno);} {useVar(nom);} {fonctionCallParameter(tInt, nom, yylineno);} {typeAffect = type;} {tabCodeInt[indextab]=creerCode("LDV",getAddress(nom,table_total),NULL);indextab++;}
	|	THIS_KEYWORD {fonctionCallParameter(tOther, NULL, yylineno);} {typeAffect = tOther;}
	|	NEW_KEYWORD TYPE_INT crochet_ouvrant Expression crochet_fermant 
	|	NEW_KEYWORD ID parenthese_ouvrante parenthese_fermante {fonctionCallParameter(tOther, NULL, yylineno);}
	|	OPP_NEG Expression {fonctionCallParameter(tBoolean, NULL, yylineno);} {typeAffect = tBoolean;}
	|	parenthese_ouvrante Expression parenthese_fermante;

virgule_expression  :   virgule Expression virgule_expression | ;

expr    :   Expression virgule_expression | ;

ID : Identifier;



%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	exit(0);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
	table_global = NULL;
	table_local = NULL;
	table_total = NULL;
	actual_local = NULL;
	actual_global = NULL;
	type = tOther;
	isLocal =0;
	yyparse();
	printf("\n");
	endProgram();
	//printf("\n");
	//DisplaySymbolsTable(table_global);
	//printf("\n");
	//DisplaySymbolsTable(table_local);
	printf("\n");
	genererCode2();
	genererCode();
	destructSymbolsTable(table_local);
	destructSymbolsTable(table_global);
	
 
}

  
                   
char *yyget_text(char *start) {
    size_t size =  1;
    char *text = malloc(size + 1);
    strncpy(text, start, size);
    text[size] = '\0';
    return text;
}