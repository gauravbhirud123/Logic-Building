#include<stdio.h>

void strlwrX(char str[])
{
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str<='Z')
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the string: \n");
    scanf("%[^'\n']",Arr);

    strlwrX(Arr);

    printf("Upadated string is %s\n ",Arr);

    return 0;
}