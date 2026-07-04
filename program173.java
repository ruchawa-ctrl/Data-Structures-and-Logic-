
//input: 5
//output: 1 * 2 * 3 * 4 * 5

import java.util.Scanner;

public class program173
{
    public static void Display(int iNo)
    {
        for(int iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.print(iCnt+ "\t*\t");
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
