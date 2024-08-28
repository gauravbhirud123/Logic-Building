import java.util.*;

class program247
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

        int iSumEven = 0;
        int iSumOdd = 0;


        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                if((iCnt%2) == 0)
                {
                    iSumEven = iSumEven + iCnt;
                }
                else
                {
                    iSumOdd = iSumOdd + iCnt;
                }
            }
            
        }
        System.out.println("Adddition of even factor is : "+iSumEven);
        System.out.println("Addition of odd factor is  : "+iSumOdd);
    }
}