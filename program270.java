import java.util.*;

class program270
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iMask = 0X00000004;
        int iResult = 0;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("3rd Bit is ON");
        }
        else
        {
            System.out.println("3rd Bit is OFF");
        }
    }
}