import Marvellous.StringX;
import java.util.Scanner;

public class program277
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String data = null;
        program280 strobj = new program280();         
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