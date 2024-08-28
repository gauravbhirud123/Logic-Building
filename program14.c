#include<stdio.h>

float Average(int no1,int no2,int no3)
{
    return ((float)(no1+no2+no3)/3);
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fAverage = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    printf("Enter third number\n");
    scanf("%d",&iValue3);

    fAverage = Average(iValue1,iValue2,iValue3);

    printf("The average is %f\n",fAverage);

    return 0;
}