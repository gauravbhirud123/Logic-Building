//ACCEPT NUMBER FROM USER AND CHECK WHETHER NUMBER IS PRIME NUMBER OR NOT.

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo<0)       //UPDATOR.
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number",iValue);
    }
    else
    {
        printf("%d is not prime number",iValue);
    } 

    return 0;
}