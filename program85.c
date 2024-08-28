#include<stdio.h>
int main()
{
    char ch ='\0';

    printf("Enter the character\n");
    scanf("%c",&ch);

    printf("Ascii value of the character in DECIMAL is : %d\n ",ch);
    printf("Ascii value of the character in HEXADECIMAL is : %x\n ",ch);
    printf("Ascii value of the character in OCTAL is : %o\n ",ch);

    return 0;
}