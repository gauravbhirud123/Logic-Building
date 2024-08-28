#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)   //(100,4)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        if(Arr[iCnt]%2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }

        iDiff = iSumEven - iSumOdd;
    }
    
    return iDiff;
    
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of element that you want to enter\n");
    scanf("%d",&iCount);

    ptr =(int*)malloc(iCount*sizeof(int));
    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter The %d Values\n",iCount);
    for(iCnt = 0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iCount);//Display(100,4)
    printf("Differencr is %d\n",iRet);

    free(ptr);  //free(100)
    printf("Dynamic memory gets deallocated\n");

    return 0;

}