#include <stdio.h>
#include <ctype.h>
#include "assessGrade.h"



/* ======================================================== */
/* FUNCTION : main                                          */
/* PURPOSE  : In the case of this project the mainline is   */
/*            a straightforward set of function calls to    */
/*            the various overloaded functions.             */
/* RETURNS  : 0 - OKAY status                               */
/* ======================================================== */

int main(void)
{

    int myArr[5] = { 0 };
    char exit[] = "x";
    // To read input 
    char value[MAX_INPUT] = "";

    // To store numeric value of input if a  
    // number (float or integer) 
    double temp;

    // To store integral value of input 
    int i;
    int n;
    int len;
    int sum = 0;
    
    int valid = false;

    // To store string value of input 
    char str[MAX_INPUT] = "";

    // Precision for integer checking 
    double val = 1e-12;
    while (value != exit)
    {
        puts("Enter either a numerical grade, a floating point number, or an array of 5 integers");
        fgets(value, 100, stdin); // Read input 


        // Check for integers. 
        if (sscanf(value, "%lf", &temp) == 1)
        {
            n = (int)temp; // typecast to int. 
            if (fabs(temp - n) / temp > val)
            {
                assessGrade(temp);//call function 
                if (temp < 54.50)
                {
                    printf("%s is a fail condition\n", value);
                }
                else if (temp > 54.50)
                {
                    printf("%s is a pass condition\n", value);
                }

            }
            else if (sscanf(value, "%i%n", &i, &n) == 1) //if the values are a bunch of integers
            {

                char** A;

                /* split the input line into separate integers */
                n = parseString(value, &A);
                
                for (i = 0; i < n; ++i)
                {
                    assessGrade(atoi(A[i]));
                    int num = atoi(A[i]);
                    sum = sum + num;

                }
                
                double percentage = 0;
                percentage = ((double)sum / 500) * 100;
                printf("%lf", percentage);
                if (percentage < 54)
                {
                    printf("%d is a fail condition\n", percentage);
                }
                else if (percentage > 54)
                {
                    printf("%d is a pass condition\n", percentage);
                }

                
                
            }

        }

        // Check for string  
        else if (sscanf(value, "%s", str) == 1)
        {

            int num = atoi(value);
            const char* lineConst = " \"+\" "; // the "input string"
            char line[256];  // where we will put a copy of the input
            char* subString; // the "result"

            strcpy(line, lineConst);

            subString = strtok(line, "\""); // find the first double quote
            subString = strtok(NULL, "\"");   // find the second double quote

            printf("the thing in between quotes is '%s'\n", subString);

            printf("string value is %s: \n", value);
            printf("int value is %d: \n", *value + *subString);
            if (*value + *subString == 108)
            {
                printf("95.00 is a pass condition"); //if the string value is A+ then return %95 
            }
            if (*value == 65)
            {
                printf("85.00 is a pass condition"); //if the string value is A then return %85 
            }
            else if (*value + *subString == 109)
            {
                printf("77.00 is a pass condition");
            }
            
            else if (*value == 66)
            {
                printf("72.00 is a pass condition");
            }
            else if (*value + *subString == 110)
            {
                printf("67.00 is a pass condition");
            }

            else if (*value == 66)
            {
                printf("62.00 is a pass condition");
            }
            else if (*value == 67)
            {
                printf("57.00 is a pass condition");
            }
            else if (*value == 68)
            {
                printf("50.00 is a fail condition");
            }

            


        }
    

        else // No match.     
            printf("input not recognized\n");

    }

    return 0;

    
}

        