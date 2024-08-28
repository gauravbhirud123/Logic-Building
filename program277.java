import java.util.*;

class program277
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated number is : "+iRet);
    }

    public static int OffBit(int iNo)
    {
        int iMask = 0X00020000;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)    //18th Bit is ON
        {
            return (iNo^iMask);
        }
        else                    //18th Bit is OFF
        {
            return iNo
        }
    }
}