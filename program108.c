#include<stdio.h>

void  ReplaceVowels(char str[])
{
    while(*str != '\0')
    {
        if( *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' ||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u')
        {
            *str = '_';
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

    ReplaceVowels(Arr);

    printf("Updated string is %s\n ",Arr);

    return 0;
}