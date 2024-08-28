import java.util.*;

class program261
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iDigit = 0;

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo%2;
            iNo = iNo/2;
            System.out.print(iDigit);
        }

        System.out.println();
    }
}