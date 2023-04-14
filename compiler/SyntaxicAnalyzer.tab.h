
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     parenthese_ouvrante = 258,
     parenthese_fermante = 259,
     accolade_ouvrante = 260,
     accolade_fermante = 261,
     crochet_ouvrant = 262,
     crochet_fermant = 263,
     point_virgule = 264,
     virgule = 265,
     point = 266,
     VISIBILITE_PUBLIC = 267,
     VISIBILITE_PROTECTED = 268,
     VISIBILITE_PRIVATE = 269,
     IF_KEYWORD = 270,
     ELSE_KEYWORD = 271,
     WHILE_KEYWORD = 272,
     NEW_KEYWORD = 273,
     THIS_KEYWORD = 274,
     MAIN_KEYWORD = 275,
     RETURN_KEYWORD = 276,
     CLASS_KEYWORD = 277,
     EXTENDS_KEYWORD = 278,
     STATIC_KEYWORD = 279,
     LENGTH_KEYWORD = 280,
     AFFICHAGE = 281,
     TYPE_INT = 282,
     TYPE_BOOLEAN = 283,
     TYPE_STRING = 284,
     TYPE_VOID = 285,
     Integer = 286,
     IntegerNeg = 287,
     Boolean = 288,
     String = 289,
     OP_AND = 290,
     OP_OR = 291,
     OP_PLUS = 292,
     OP_MOINS = 293,
     OP_MULTIPLICATION = 294,
     OPP_AFFECT = 295,
     OPP_NEG = 296,
     OP_SUP = 297,
     OP_SUP_EG = 298,
     OP_INF = 299,
     OP_INF_EG = 300,
     OP_EG = 301,
     OP_DIFF = 302,
     Identifier = 303,
     COMMENT_LINE = 304,
     COMMENT_MULTI_LINE = 305,
     EndOfFile = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


