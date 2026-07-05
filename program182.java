//************  


//input: 7
//output: a b c d e f g 

import java.util.Scanner;

public class program182
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char cCh = '\0';
        for(iCnt = 1, cCh = 65; iCnt<=iNo; iCnt++, cCh++)
        {
            System.out.print(cCh+"\t");
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
