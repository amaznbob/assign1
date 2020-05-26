/* ======================================================== */
/* PURPOSE : This file contains all of the various          */
/*           functions used to set the time within the      */
/*           global <gulp> time structure ...               */
/* ======================================================== */



#include "assessGrade.h"

int assessGrade(char letterGrade[])
{
	char str[MAX_INPUT] = "";

	int APlus = 108;
	int num[] = { atoi(letterGrade) };
	printf("%s", *num);
	const char* lineConst = " \"+\" "; // the "input string"
	char line[256];  // where we will put a copy of the input
	char* subString; // the "result"

	strcpy(line, lineConst);

	subString = strtok(line, "\""); // find the first double quote
	subString = strtok(NULL, "\"");   // find the second double quote

	printf("the thing in between quotes is '%s'\n", subString);

	printf("string value is %s: \n", letterGrade);
	printf("string value of substring is %s: \n", subString);
	printf("int value is %d: \n", *letterGrade);
	printf("int value with plus is %d: \n", *letterGrade + *subString);


	int plus = *letterGrade + *subString;



	if (*letterGrade == 65)
	{
		printf("85.00 is a pass condition"); //if the string value is A then return %85
		return (*letterGrade);

	}
	else if (*letterGrade == 108)
	{
		printf("95.00 is a pass condition"); //if the string value is A+ then return %95 
		return (*letterGrade + *subString);
	}
	else if (*letterGrade == 66)
	{
		printf("72.00 is a pass condition");
		return (*letterGrade);
	}
	else if (*letterGrade == 67)
	{
		printf("62.00 is a pass condition");
		return (*letterGrade);
	}
	else if (*letterGrade == 68)
	{
		printf("57.00 is a pass condition");
		return (*letterGrade);
	}
	else if (*letterGrade == 70)
	{
		printf("50.00 is a fail condition");
		return (*letterGrade);
	}


	else if (*letterGrade + *subString == 109)
	{
		printf("77.00 is a pass condition");
		return (*letterGrade + *subString);
	}


	else if (*letterGrade + *subString == 110)
	{
		printf("67.00 is a pass condition");
		return (*letterGrade + *subString);
	}

}




int assessGrade(double finalMark)
{
	int retCode = SUCCESS;
	double result = finalMark;
	double fail = 0;
	double pass = 0;
	int alphaNum = 0;
	// check to see if the final marks are in range
	if (finalMark < 0 || finalMark > 100)
	{
		retCode = FAILURE;
	}
	else
	{
		int retCode = SUCCESS;
		if (result < 54.50)
		{
			return result;

		}
		else if (result > 54.50)
		{
			return  result;
		}
		
	}
		
	
	return (result);
}

int assessGrade(int assignMarks[])
{
	return 0;
}


int assessGrade(int assignMarks)
{
	int sum = 0;
	int num = assignMarks;
	sum = sum + assignMarks;
	return sum;

}


void clearCR(char* buf)
{
	char* whereCR = strchr(buf, '\n');
	if (whereCR != NULL)
	{
		*whereCR = '\0';
	}
}


int parseString(char* line, char*** argv) {

	char* buffer;
	int argc;

	buffer = (char*)malloc(strlen(line) * sizeof(char));
	strcpy(buffer, line);
	(*argv) = (char**)malloc(MAX_TOKS * sizeof(char**));

	argc = 0;
	(*argv)[argc++] = strtok(buffer, DELIMITERS);
	while ((((*argv)[argc] = strtok(NULL, DELIMITERS)) != NULL) &&
		(argc < MAX_TOKS)) ++argc;

	return argc;
}
