import java.util.*;

class program278
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);

        System.out.println("Updated Number is : "+iRet);
    }

    public static int ToggleBit(int iNo)
    {
        int iMask = 0X00000040;
        int iResult = 0;
        iResult = iNo ^ iMask;

        return result;
    }
}