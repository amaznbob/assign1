/* ======================================================== */
/* PURPOSE : This file contains all of the various          */
/*           functions used to set the time within the      */
/*           global <gulp> time structure ...               */
/* ======================================================== */



#include "assessGrade.h"

int assessGrade(char letterGrade[])
{
	char* input = letterGrade;
	char buffer[30] = { *letterGrade};
	char grade[20];
	double percent = 0.0;
	int age;
	
	


	char twoVal[] = { "" };
	int n = 0;
	char plus[] = { '+' };
	
	int retCode = SUCCESS;



	if (sscanf(buffer, "%s", grade == "A")) 
	{
		percent = 95.00;
		

	}
	else if (sscanf(buffer, "%s", grade == "B"))
	{
		percent = 72.00;
		printf("%lf", percent);
	}
	else
	{
		retCode = FAILURE;
	}

	return percent;

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



void parseInput(char input[])
{
	char* decimalCheck = strchr(input, '.');
	int numberCheck = isdigit(input[0]);
	clearCR(input);
}

void clearCR(char* buf)
{
	char* whereCR = strchr(buf, '\n');
	if (whereCR != NULL)
	{
		*whereCR = '\0';
	}
}

void validCheck(int lastRetCode)
{
	if (lastRetCode == SUCCESS)
	{
		
		printf("Input is a valid  %d\n", lastRetCode);
	}
	else
	{
		printf("  >> *** ERROR : Sorry, there was an error in the input\n");
	}
}

void disp(int values)
{
	printf("%d ", values);
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
