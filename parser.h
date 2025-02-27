#ifndef PARSER_H
#define PARSER_H

#include "lexer.h"

void parseProgram(FILE *source);
void parseDel(FILE *source);
void parseListe_id(FILE *source);
void parseListe_inst(FILE *source);
void parseI(FILE *source);
void parseC(FILE *source);
void parseExp(FILE *source);

void match(TokenCode expected, FILE *source);

extern Token lookahead;

#endif