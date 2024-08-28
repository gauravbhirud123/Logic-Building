import java.util.*;

class program257
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.print("Enter Your Name : ");
        str = sobj.nextLine();

        Display(str);

        sobj.close();

    }
    public static void Display(String str)
    {
        int iCnt = 0;
        for(iCnt = 0;iCnt<str.length();iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
    }           
    
}