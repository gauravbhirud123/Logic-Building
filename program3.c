#include<stdio.h>

int Addition(int no1, int no2)
{
    return no1 + no2;
}
int main()
{
    int value1 = 0;
    int value2 = 0;
    int sum = 0;

    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter  second number : \n");
    scanf("%d",&value2);

    sum = Addition(value1,value2);

    printf("Addition is %d\n",sum);

    return 0;
}