import java.util.Scanner;

public class program263
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String Arr = null;
        System.out.println("Enter string: ");
        Arr = sc.nextLine();

        System.out.println("Length of entered string: "+ Arr.length());

        System.out.println("Entered string: "+ Arr);

        System.out.println(Arr.charAt(0));
        System.out.println(Arr.charAt(1));
        System.out.println(Arr.charAt(2));
    }
}
