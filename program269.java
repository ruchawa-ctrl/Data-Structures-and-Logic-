import java.util.Scanner;

class StringX
{
    public void Display(String str)
    {
        System.out.println("Recieved string is: "+str);
    }
}

public class program269
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();

        System.out.println("Enter string: ");
        data = sc.nextLine();

        strobj.Display(data);

        System.out.println(data.length());
    }
}