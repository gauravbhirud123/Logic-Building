#include<stdio.h>

int  CountSpace(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("Frequency of space is %d ",iRet);

    return 0;
}