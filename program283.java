 import java.util.Scanner;

class StringX
{
   public String toUpperX(String str)
   {
        int i;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i]=='a' || Arr[i] == 'A')
            {
                Arr[i] = '-';
            }
        }
        String ret = new String(Arr);
        
        return ret;
   }
}

public class program283
{
    public static void main(String A[])
    {
        char ch1 = 'A';

        System.out.println(ch1);
        System.out.println((char)(ch1+32)); //97
    }
        
}