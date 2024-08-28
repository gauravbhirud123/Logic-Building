//Accept the marks from user and return the precentage.

#include<stdio.h>

float CalculatePercentage(int marks, int outofmarks)
{
    if((marks < 0) || (outofmarks < 0) || (marks > outofmarks))
    {
        printf("Invalid input");
    }
    
    return (((float)marks/(float)outofmarks)*100); 

}
int main()
{
    int marks = 0;
    int out_of = 0;
    float percentage = 0;

    printf("Enter your marks\n");
    scanf("%d",&marks);

    printf("Enter out of marks\n");
    scanf("%d",&out_of);

    percentage = CalculatePercentage(marks,out_of);

    printf("Your percentage is %f\n",percentage);

    return 0;

}