 import java.util.Scanner;

class StringX
{
   public String toUpperX(String str)
   {
        int i;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = (char)(Arr[i] - 32);     
        }
        String ret = new String(Arr);
        
        return ret;
   }
}

public class program285
{
    public static void main(String A[])
    {
        char ch1 = 'A';

        System.out.println(ch1);
        System.out.println(ch1+32); //97
    }
        
}