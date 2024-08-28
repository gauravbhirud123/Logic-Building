//Accept number from user and print how many Digits int thet number.

#include<stdio.h>

int  CountDigits(int iNo)
{
    int iCnt = 0;
    
    while(iNo != 0)
    {
        iNo = iNo/10;

        iCnt++;
    }

    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are %d\n",iRet);

    return 0;
}