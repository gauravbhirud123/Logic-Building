import java.util.*;

class program245
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0,iAns = 0;

        System.out.println("Enter Number : "); 
        iValue = sobj.nextInt();

        iAns = Factorial(iValue);
        System.out.println("Factorial is "+iAns);

        sobj.close();
    }

    public static int Factorial(int iNo)
    {
        int iFact = 1;
        int iCnt = 0;

        iCnt = 1;
        while(iCnt <= iNo)
        {
            iFact = iFact * iCnt;
            iCnt++;
        }
        return iFact;
    }
}