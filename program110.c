#include<stdio.h>

void struprX(char str[])
{
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str<='z')
        {
            *str = *str - 32;
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

    struprX(Arr);

    printf("Upadated string is %s\n ",Arr);

    return 0;
}