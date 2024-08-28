#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']",Arr);

    printf("Enterd string is : %s\n",Arr);
    return 0;
}