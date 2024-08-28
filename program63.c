#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<=6;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Count\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}