import java.util.*;

class program276
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated Number is : "+iRet);
    }

    public static int OffBit(int iNo)
    {
        int iMask = 0X00000400;
        int iResult = 0;
        int iResult = iNo & iMask;

        if(iResult == iMask)        //11th BIT IS ON
        {
            return(iNo ^ iMask);
        }
        else                        //11TH BIT IS OFF
        {
            return iNo;
        }
    }
}