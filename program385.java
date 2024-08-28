import java.util.*;
class program284
{
    public static void main(String arg[])
    {
        Scanner Sobj = new Scanner(System.in);
        int iRow = 0,iCol = 0;

        System.out.println("Enter Number Of Rows");
        iRow = Sobj.nextInt();

        System.out.println("Enter Number Of Columns");
        iCol = Sobj.nextInt();

        int[][] Arr = new int[iRow][iCol];
        int i = 0,j = 0;

        System.out.println("Enter The Elements : ");
        for(i = 0;i < iRow; i++)
        {
            for(j = 0;j < iCol; j++)
            {
                Arr[i][j] = Sobj.nextInt();
            }
        }

        System.out.println("Enter Elements Are : ");
        for(i = 0;i < iRow; i++)
        {
            for(j = 0;j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
        

    }
}