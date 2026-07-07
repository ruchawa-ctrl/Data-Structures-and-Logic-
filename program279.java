 import java.util.Scanner;

class StringX
{
   public String Update(String str)
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
        return new String(Arr);
       }
}

public class program279
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        String sRet = null;

         System.out.println("Enter string: ");
        data = sc.nextLine();

        sRet = strobj.Update(data);
        

        System.out.println("Updated string: "+ sRet);       
    }
}