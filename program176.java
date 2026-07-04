//input: 5
//output: 1 * 3 * 5 * 7

import java.util.Scanner;

public class program176
{
    public static void Display(int iNo)
    {
        for(int iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.print("*\t");
            }
            else{
            System.out.print(iCnt+"\t");
            }
            
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
