#pragma once

#define SUCCESS		 1
#define FAILURE		-1

#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_STRING_LENGTH 255
#define MAX_TOKS 100
#define DELIMITERS " \t"
# define MAX_INPUT 100

#pragma warning(disable:4996)

int assessGrade(char letterGrade[]);
int assessGrade(double finalMark);
int assessGrade(int assignMarks[]);
void parseInput(char input[]);
void clearCR(char* buf);
void validCheck(int lastRetCode);
void disp(int values);
int parseString(char* line, char*** argv);

