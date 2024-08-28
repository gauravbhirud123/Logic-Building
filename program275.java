import java.util.*;

class program275
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated Number is : "+iRet);
    }
    
    public static int OffBit(int iNo)
    {
        int iMask = 0X00000008;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)    //4th Bit is ON
        {
            return (iNo^iMask);
        }
        else                    //4th Bit is Off
        {
            return iNo;
        }
    }
    
}