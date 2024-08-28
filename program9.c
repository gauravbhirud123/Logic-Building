/*0-34  fail
35-49 pass class
50-59 second class
60-74 first class
75-100 above Distinction.*/

// Accept the percentage from user and return its class.

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks<0.0) || (fMarks>100))   //Filter.
    {
        printf("Invalid Marks");
    }
    if((fMarks>=0.0) && (fMarks<35.00))
    {
        printf("You are fail\n");
    }
    else if((fMarks>=35.00) && (fMarks<50.00))
    {
        printf("Your class is pass class\n");
    }
    else if((fMarks>=50.00) && (fMarks<60.00))
    {
        printf("Your class is second class");
    }
    else if((fMarks>=60.00) && (fMarks<75.00))
    {
        printf("Your class is first class");
    }
    else if((fMarks>=75.00) && (fMarks<=100))
    {
        printf("Your class is first class with distinction");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("Enter your percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}