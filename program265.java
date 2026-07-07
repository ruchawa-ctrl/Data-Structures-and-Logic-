import java.util.Scanner;

public class program265
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String Arr = null;
        System.out.println("Enter string: ");
        Arr = sc.nextLine();

        System.out.println("Length of entered string: "+ Arr.length());

        char str[]= Arr.toCharArray();

        int i = 0;
        for(i=0;i<Arr.length();i++)
        {
            System.out.println(Arr.charAt(i));
        }
        System.out.println("Entered string: "+ Arr);

        System.out.println(Arr.charAt(0));
        System.out.println(Arr.charAt(1));
        System.out.println(Arr.charAt(2));
    }
}
