/* ======================================================== */
/* PURPOSE : This file contains all of the various          */
/*           functions used to set the time within the      */
/*           global <gulp> time structure ...               */
/* ======================================================== */



#include "assessGrade.h"

int assessGrade(char letterGrade[])
{
	char* input = letterGrade;


	char twoVal[] = { "" };
	int n = 0;
	char plus[] = { '+' };
	double grade = 0.0;
	int retCode = SUCCESS;



	if (letterGrade == "F")
	{
		grade = 50.00;
		printf("%lf", grade);

	}
	else if (input == "D")
	{
		return grade = 57.00;
	}
	else if (input == "C")
	{
		return grade = 52.00;
	}
	else if (input == "C+")
	{
		return grade = 67.00;

	}
	else if (input == "B")
	{
		return grade = 72.00;

	}
	else if (input == "B+")
	{
		return grade = 77.00;
	}
	else if (input == "A")
	{
		return grade = 85.00;
	}
	else if (input == "A+")
	{
		return grade = 95.00;
	}
	else
	{
		retCode = FAILURE;
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
	int* stream = assignMarks;
	int i = 0;
	int retCode = SUCCESS;
	
	
		int totalMarks = 500;
		double percentage = 20.0;
		
		int value = 0;
		int size = 0;
	
		double sum = 0.0;

		scanf("%d",&assignMarks);
		
			
		return *assignMarks;

			
		
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