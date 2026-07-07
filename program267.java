import java.util.Scanner;

public class program267
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String str = new String();

        System.out.println("Enter string: ");
        str = sc.nextLine();

        System.out.println("String is : "+str);

        System.out.println(str.length());
    }
}