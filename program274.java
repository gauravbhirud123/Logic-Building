import java.util.*;

class program274
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
            System.out.println("10th & 12th Bits are ON");
        }
        else
        {
            System.out.println("Bits Are OFF");
        }
    }
    
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000a00;
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