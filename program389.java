import java.util.*;
class program388
{
    public static void main(String arg[])
    {
        Scanner Sobj = new Scanner(System.in);
        int iRow = 0,iCol = 0;

        System.out.println("Enter Number Of Rows");
        iRow = Sobj.nextInt();

        System.out.println("Enter Number Of Columns");
        iCol = Sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
        iRet = mobj.Summation();
        System.out.println("The Sum Of Matrix is "+iRet);
    }
}

class Matrix
{
    public int Arr[][];

    public Matrix(int A,int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        Scanner Sobj = new Scanner(System.in);
        int i = 0, j = 0;
        System.out.println("Enter The Elements : ");
        for(i = 0;i < Arr.length; i++)
        {
            for(j = 0;j < Arr[i].length; j++)
            {
                Arr[i][j] = Sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0,j = 0;
        System.out.println("Enter Elements Are : ");
        for(i = 0;i < Arr.length; i++)
        {
            for(j = 0;j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
        
    }

    public int Summation()
    {
        int i = 0,j = 0,iSum = 0;
        System.out.println("Enter Elements Are : ");
        for(i = 0;i < Arr.length; i++)
        {
            for(j = 0;j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            
        }
        return iSum;
        
    }
}