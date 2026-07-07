import java.util.Scanner;

class StringX
{
    public int CountCapital(String str)
    {
        int iCount=0;
        for(int i = 0; i<str.length(); i++)
        {
            if (str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSmall(String str)
    {
        int iCount=0;
        for(int i = 0; i<str.length(); i++)
        {
            if (str.charAt(i)>='a' && str.charAt(i)<='z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

public class program271
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter string: ");
        data = sc.nextLine();

        iRet = strobj.CountCapital(data);
        iRet = strobj.CountSmall(data);

        System.out.println("Number of Small characters: "+iRet);
    }
}