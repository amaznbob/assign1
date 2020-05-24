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
    double sum = 0.0;

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
                assessGrade(temp);
                if (temp < 54.50)
                {
                    printf("%s is a fail", value);
                }
                else if (temp > 54.50)
                {
                    printf("%s is a pass", value);
                }
            }

            

        else if (sscanf(value, "%i%n", &i, &n) == 1)
            {
                
                char str[] = { *myArr };
                int size = strlen(str);
                char delim[] = " ";
                char* ptr = strtok(str, delim);
                assessGrade(value);
                puts("Displaying values ");
               
                printf("%d\n", *ptr);
                
                    

            }


        }
        // Check for string  
        else if (sscanf(value, "%s", str) == 1)
        {

            assessGrade(value);
            printf("string value is %s: \n", value);
            printf("float value is %lf", value);


        }

        else // No match.     
            printf("input not recognized\n");
    }

    return 0;

    
}

        