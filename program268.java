import java.util.*;

class program268;
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
        {
            if(bRet == true)
            {
                System.out.println("7th & 15th Bits are ON");
            }
            else
            {
                System.out.println("Bits are OFF");
            }
        }

    }

    public static boolean CheckBit(int iNo)
    {
        int iMask = 16448;
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