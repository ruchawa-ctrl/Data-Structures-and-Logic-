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

    public int CountDigits(String str)
    {
        int iCount=0;
        char Arr[] = str.toCharArray();

        for(int i = 0; i<Arr.length; i++)
        {
            if (Arr[i]>='0' && Arr[i]<='9')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSpace(String str)
    {
        int iCount=0;
        char Arr[] = str.toCharArray();

        for(int i = 0; i<Arr.length; i++)
        {
            if (Arr[i]==' ')
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSpecialSymbols(String str)
    {
        int iCount=0;
        char Arr[] = str.toCharArray();

        for(int i = 0; i<Arr.length; i++)
        {
            if ((Arr[i]>='!' && Arr[i]<='/') || (Arr[i]>=':' && Arr[i]<='@') || (Arr[i]>='[' && Arr[i]<='`') || (Arr[i]>='{' && Arr[i]<='~'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

public class program275
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
        System.out.println("Number of Capital characters: "+iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small characters: "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits: "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of White Spaces: "+iRet);

        iRet = strobj.CountSpecialSymbols(data);
        System.out.println("Number of Special Symbols: "+iRet);
    }
}