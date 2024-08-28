/*1standard-8 AM
2standard-9 AM
3standard-10 AM
4standard-11 AM
5standard-12 AM */

#include<stdio.h>

void DisplayExamTime(int standard)
{
    if(standard == 1)
    {
        printf("Your exam is at 8 AM\n");
    }

    else if(standard == 2)
    {
        printf("Your exam is at 9 AM\n");
    }

    else if(standard == 3)
    {
        printf("Your exam is at 10 AM\n");
    }

    else if(standard == 4)
    {
        printf("Your exam is at 11 AM \n");
    }

    else if(standard == 5)
    {
        printf("Your exam is at 12 NOON \n");
    }

    else
    {
        printf("Invalid Input \n");
    } 
    

    int main()

    {
        int standard = 0;

        printf("Enter your standard \n");
        scanf("%d",&standard);

        DisplayExamTime(standard);

        return 0;

    }

    
}
