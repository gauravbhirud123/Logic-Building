#include<stdio.h>

int  CountDigits(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= '0' && *str<='9')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the string: \n");
    scanf("%[^'\n']",Arr);

    iRet = CountDigits(Arr);

    printf("Frequency of digit is %d ",iRet);

    return 0;
}