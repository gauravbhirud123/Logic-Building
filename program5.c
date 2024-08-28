// Accept the number from user and return its cube.

#include<stdio.h>
long int calculatecube (int value)
{
    return value*value*value;
}

int main()
{
    int number = 0;
    long int  cube = 0;

    printf("Enter the number\n");
    scanf("%d",&number);

    cube = calculatecube(number);

    printf(" cube is %d\n",cube);

    return 0;
}

