#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iValue = 0;

    printf("Enter number of elements that you want to enter\n");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount*sizeof(int));

    printf("Enter Array Elements\n");
    for(iCnt = 0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iCount,iValue);
    printf("%d occours %d times",iValue,iRet);

    free(ptr);

    return 0;

}