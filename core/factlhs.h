   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.10  04/09/97            */
   /*                                                     */
   /*                FACT BUILD HEADER FILE               */
   /*******************************************************/

/*************************************************************/
/* Purpose:                                                  */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*************************************************************/

#ifndef _H_factlhs

#define _H_factlhs

#ifndef _H_symbol
#include "symbol.h"
#endif
#ifndef _H_scanner
#include "scanner.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _FACTLHS_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

   LOCALE int                            FactPatternParserFind(SYMBOL_HN *);
   LOCALE struct lhsParseNode           *FactPatternParse(char *,struct token *);
   LOCALE struct lhsParseNode           *SequenceRestrictionParse(char *,struct token *);
   LOCALE struct lhsParseNode           *CreateInitialFactPattern(void);

#endif
