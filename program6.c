//Take number from user and check whether its even or odd.

/*#include<stdio.h>
int main()
{
    int number = 0;

    printf("Enter the number\n");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("The number is even");
    }
    
    else
    {
        printf("The number is odd");
    }

    return 0;
}*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo%2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is an even number\n",iValue);
    }
    else
    {
        printf("%d is an odd number\n",iValue);
    }

    return 0;
}