 import java.util.Scanner;

class StringX
{
   public String toUpperX(String str)
   {
        int i;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = Arr[i] - 32;       //Error
        }
        String ret = new String(Arr);
        
        return ret;
   }
}

public class program281
{
    public static void main(String A[])
    {
        char ch1 = 'A';

        System.out.println(ch1);
        System.out.println(ch1+32); //97
    }
        
}