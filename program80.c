#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
            {
                printf("*\t");
            }
            else
            {    
                printf("$\t");
            }     
        }    printf("\n");
    }
   

}
int main()
{
    int iRows = 0;
    int iColumns = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iRows);

    printf("Enter number of column\n");
    scanf("%d",&iColumns);
    

    Display(iRows,iColumns);

    return 0;
}