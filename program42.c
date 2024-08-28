#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iCopy = iNo;  //Xerox kadhali
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        iRev = (iRev*10)+iDigit;
    }
    
    return(iRev == iCopy);
    
}

int main()
{
    int iValue = 0;
    int bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is not pallindrome number\n",iValue);
    }

    return 0;

}