#include<stdio.h>

int Counta(char str[],char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
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

    printf("Enter the character for frequency calculation\n");
    scanf("%c",&cValue);

    iRet = Counta(Arr,cValue);

    printf("Frequency of a letter is %d ",iRet);

    return 0;/////////this promblem create promblem solution in next code//////////
}