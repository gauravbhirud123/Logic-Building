//ACCEPT NUMBBER FROM USER FIND ITS FACTOR AND RETURN ITS ADDITION.

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }

    }
    return iSum;

    
}

int main()

{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("The sum of factors are %d\n",iRet);

    return 0 ;
}