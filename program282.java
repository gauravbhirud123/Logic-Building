import java.util.*;

class program282
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iPos = 0;
        boolean bRet = false;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        System.out.print("Enter the position : ");
        iPos = sobj.nextInt();

        bRet = CheckBit(iNo,iPos);
        if(bRet == true)
        {
            System.out.println("Bit is ON at the given Position");
        }
        else
        {
            System.out.println("Bit is OFF at the given Position");
        }
    }

    public static boolean CheckBit(int iNo,int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;
        if(iResult == iMask)
    }
}