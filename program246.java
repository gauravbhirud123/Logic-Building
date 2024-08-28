import java.util.*;

class program246
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        EvenOddFactors(iValue);

        sobj.close();
    }

    public static void EvenOddFactors(int iNo)
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                if((iCnt%2) == 0)
                {
                    System.out.println("Even Factors is : "+iCnt);
                }
                else
                {
                    System.out.println("Odd Fator is : "+iCnt);
                }
            }
            
        }
    }
}