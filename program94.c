#include<stdio.h>

void Display(char *str)
{
    printf("String is : %s\n",str);
}

int main()
{
    char Arr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']",Arr);

    Display(Arr);

    return 0;
}