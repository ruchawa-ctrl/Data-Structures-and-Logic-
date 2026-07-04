import java.util.Scanner;

public class program171 
{
    public static void Display(int iNo)
    {
        for(int iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.println("*\t");
        }
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number of elements: ");
        iValue = sc.nextInt();

        Display(iValue);
        sc.close();
    }
}
