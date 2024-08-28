#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] == 21)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements that you want to enter \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int));

    printf("Enter Array Elements\n");
    for(iCnt = 0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iCount);
    printf("21 Occours %d times\n",iRet);

    free(ptr);

    return 0;
}