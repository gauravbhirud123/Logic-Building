#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)   //(100,4)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    if(Arr[iCnt]%2 == 0)
    {
        iEvenCnt++;
    }
    return iEvenCnt++;
    
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

    iRet = CountEven(ptr,iCount);//Display(100,4)
    printf("Even elements in the array is %d\n",iRet);

    free(ptr);  //free(100)
    printf("Dynamic memory gets deallocated\n");

    return 0;

}