#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[],int iSize)   //(100,4)
{
    int iCnt = 0;

    printf("\n Even Elements of the array are\n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    if(Arr[iCnt]%2 == 0)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of element that you want to enter\n");
    scanf("%d",&iCount);

    ptr =(int*)malloc(iCount*sizeof(int));
    printf("Dynamic Memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter The %d Values\n",iCount);
    for(iCnt = 0;iCnt<iCount;iCnt++)
    {
        printf("\n Enter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    EvenDisplay(ptr,iCount);//Display(100,4)

    free(ptr);  //free(100)
    printf("Dynamic memory gets deallocated\n");

    return 0;

}