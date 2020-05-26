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
                assessGrade(temp);//call overloaded function assessGrade(finalMark)
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
                    assessGrade(atoi(A[i])); //call overloaded function assessGrade(assignMarks[])
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
            
            assessGrade(value); //call overloaded function assessGrades(letterGrade)
            printf("%d", *value);
        }

        else // No match.     
            printf("input not recognized\n");

    }

    return 0;

    
}

        