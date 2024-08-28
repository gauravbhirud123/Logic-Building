import java.util.*;

class program263
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iDigit = 0;
        int iCnt = 0;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo%2;
            iNo = iNo/2;
            if(iDigit == 1)
            {
                iCnt++;
            }
        }

        System.out.println("Number of 1 Bit are "+iCnt);
    }
}