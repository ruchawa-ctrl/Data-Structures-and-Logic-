
//************  


//input: 7
//output: A b C d E f G

import java.util.Scanner;

public class program190
{
    public static void Display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
        for(iCnt = 1; iCnt<=4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
        for(iCnt = 1; iCnt<=4; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        int iValue = 0;

        // System.out.println("Enter the number of elements: ");
        // iValue = sc.nextInt();

        Display();
        sc.close();
    }
}
