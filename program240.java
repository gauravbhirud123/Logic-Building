import java.util.*;

class program240
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        {
            int iNo1 = 0;
            int iNo2 = 0;
            int iAns = 0;

            System.out.println("Enter First Number");
            iNo1 = sobj.nextInt();

            System.out.println("Enter Second Number");
            iNo2 = sobj.nextInt();

            iAns = Addition(iNo1,iNo2);
            System.out.println("Addition is "+iAns);
        }
    }

    public static int Addition(int iValue1,int iValue2)
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
}