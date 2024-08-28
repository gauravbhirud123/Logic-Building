import java.util.*;

class program267
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
        if(bRet == true)
        {
            System.out.println("17th Bit is ON");
        }
        else
        {
            System.out.println("17th Bit is OFF");
        }
    }

    public static boolean CheckBit(int iNo)
    {
        int iMask = 65536;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}