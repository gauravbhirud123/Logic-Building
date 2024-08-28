/*import java.util.*;

class Program507
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int i = 0;
        int SpaceCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                SpaceCnt++;
            }
        }
        System.out.println("Number of words are : "+(SpaceCnt+1));
    }
}*/

import java.util.*;

class program 507
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        String reversestr = "";

        for(int i=Arr.length-1;i>=0;i--)
        {
            reversestr = reversestr + Arr[i];
        }

        System.out.println("Reverse string is : "+  reversestr);
    }
}