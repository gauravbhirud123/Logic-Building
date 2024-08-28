import java.util.*;

class program269
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
        if(bRet == true)
        {
            System.out.println("3rd & 9th Bits are ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
    }
}