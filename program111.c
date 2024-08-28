#include<stdio.h>

void strtoggleX(char str[])
{
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str<='z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str<='Z')
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    printf("Enter the string: \n");
    scanf("%[^'\n']",Arr);

    strtoggleX(Arr);

    printf("Upadated string is %s\n ",Arr);

    return 0;
}