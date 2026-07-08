 import java.util.Scanner;

class StringX
{
   public String Toggle(String str)
   {
        int i;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i]>='A' && Arr[i]<= 'Z')
            {
                Arr[i] = (char)(Arr[i] + 32);     
            }
            else if(Arr[i]>='a' && Arr[i]<= 'z')       
            {    
                Arr[i] = (char)(Arr[i] - 32);   
            }
        }
        String ret = new String(Arr);
        
        return ret;
   }
}

public class program289
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        String sRet = null;

         System.out.println("Enter string: ");
        data = sc.nextLine();

        sRet = strobj.Toggle(data);
        

        System.out.println("Updated string: "+ sRet);    

    }

        
}