import java.util.*;

class program281
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iPos = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position : ");
        iPos = sobj.nextInt();

        iRet = OffBit(iNo,iPos);
        System.out.println("Updated Number is : "+iRet);
    }

    public static int OffBit(int iNo,int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;
        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
    }
}