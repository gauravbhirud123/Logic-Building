#include<stdio.h>

int  CountVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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

    iRet = CountVowels(Arr);

    printf("Frequency of voewels is %d ",iRet);

    return 0;
}