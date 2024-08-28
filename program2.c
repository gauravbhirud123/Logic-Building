//Accept two values from user and perform the addition.

#include<stdio.h>
int main()
{
    int value1 = 0;
    int value2 = 0;
    int Sum = 0;

    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter second number : \n");
    scanf("%d",&value2);

    Sum = value1 + value2;

    printf("Addition is %d\n",Sum);

    return 0;
}