//************  


//input: 7
//output: 1 * 2 * 3 * 4

import java.util.Scanner;

public class program177
{
    public static void Display(int iNo)
    {
        int iCount = 1;
        for(int iCnt = 1; iCnt<=iNo; iCnt++)
        {

            if(iCnt%2==0)
            {
                System.out.print("*\t");
            }
            else{
                
                System.out.print(iCount+"\t");
                iCount++;
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
