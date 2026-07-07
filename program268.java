import java.util.Scanner;

class StringX
{
    public void Display(String str)
    {
        System.out.println("Recieved string is: "+str);
    }
}

public class program268
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String str = null;
        program280 strobj = new program280();

        System.out.println("Enter string: ");
        str = sc.nextLine();

        strobj.Display(str);

        System.out.println(str.length());
    }
}