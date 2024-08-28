#include<stdio.h>

int  CountSmall(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str<='z')
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

    iRet = CountSmall(Arr);

    printf("small character letter is %d ",iRet);

    return 0;
}