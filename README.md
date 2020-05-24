# assign1
So i want to create a program that can first tell which data type has been entered.
We can use anything in C++ accept cout and cin

The user inputs data, parses the data so that we can extract the values and do something using overloaded functions. In this case three overloaded functions are called assessGrade() 

If it is a float then call function assessGrade(double finalMark)
if it is an array of integers then call function assessGrade(int assignMarks[])
If it is a string then process then call function assessGrade(char *letterGrade)

Prototypes:

int assessGrade(double finalMark);//takes the float value and determines if the grade is a pass or a fail
if finalMark < 54.5 then
Fail
else if finalMark >54.50 then
Pass


int assessGrade(int assignMarks[]);//takes array of integers (0-100) up to 5. Total marks = 100 where each integer represents a total of 20% (so if total marks = 100, each assignment[5] = %20)
if input for integers are for example 30, 40, 50, the result would be 30 + 40 + 50 / 500, then converted to decimal to represent the total mark in percentage

int assessGrade(char letterGrade[]);// takes a letter grade and converts it to a float value
if the letter is A+ for example, the result would be 95.00 or %95

Example inputs:

if integers : 30, 50, 60, 70, 56
if float: 89.7
if character: A+, A, B+, B

example output: //absolutely the only acceptable output

Student achieved ###.## % which is a PASS condition.
or
Student achieved ###.## % which is a FAIL condition. 

There are alot of boundry conditions (like if the user enters A++<-- extra plus, invalid input) but I just want to make this code work first.
