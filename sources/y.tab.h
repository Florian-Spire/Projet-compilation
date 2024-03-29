/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PTR_OP = 258,
    LE_OP = 259,
    GE_OP = 260,
    EQ_OP = 261,
    NE_OP = 262,
    SHIFTRIGHT_OP = 263,
    SHIFTLEFT_OP = 264,
    EQ = 265,
    AND_OP = 266,
    OR_OP = 267,
    EXTERN = 268,
    VOID = 269,
    STRUCT = 270,
    SIZEOF = 271,
    IF = 272,
    ELSE = 273,
    WHILE = 274,
    FOR = 275,
    RETURN = 276,
    PLUS = 277,
    MINUS = 278,
    STAR = 279,
    SLASH = 280,
    INC_OP = 281,
    DEC_OP = 282,
    IDENTIFIER = 283,
    CONSTANT = 284,
    INT = 285
  };
#endif
/* Tokens.  */
#define PTR_OP 258
#define LE_OP 259
#define GE_OP 260
#define EQ_OP 261
#define NE_OP 262
#define SHIFTRIGHT_OP 263
#define SHIFTLEFT_OP 264
#define EQ 265
#define AND_OP 266
#define OR_OP 267
#define EXTERN 268
#define VOID 269
#define STRUCT 270
#define SIZEOF 271
#define IF 272
#define ELSE 273
#define WHILE 274
#define FOR 275
#define RETURN 276
#define PLUS 277
#define MINUS 278
#define STAR 279
#define SLASH 280
#define INC_OP 281
#define DEC_OP 282
#define IDENTIFIER 283
#define CONSTANT 284
#define INT 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "structfe.y"

        char *nom;
        int entier;
        int type;
	struct tablesymboles* symbolValue;

#line 124 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
