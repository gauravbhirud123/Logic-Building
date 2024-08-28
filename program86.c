#include<stdio.h>
int main()
{
    int iCnt = 0; 


    for(iCnt = 1;iCnt<=127;iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    return 0;
}