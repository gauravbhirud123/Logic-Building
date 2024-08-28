#include<stdio.h>

int  CountCapital(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str<='Z')
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

    iRet = CountCapital(Arr);

    printf("Capital character letter is %d ",iRet);

    return 0;
}