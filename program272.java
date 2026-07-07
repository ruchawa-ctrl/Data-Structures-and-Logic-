import java.util.Scanner;

class StringX
{
    public int CountCapital(String str)
    {
        int iCount=0;
        char Arr[] = str.toCharArray();
        for(int i = 0; i<Arr.length; i++)
        {
            if (Arr[i]>='A' && Arr[i]<='Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSmall(String str)
    {
        int iCount=0;
        char Arr[] = str.toCharArray();

        for(int i = 0; i<Arr.length; i++)
        {
            if (Arr[i]>='a' && Arr[i]<='z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

public class program272
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