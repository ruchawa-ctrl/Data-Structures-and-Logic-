//************  


//input: 7
//output: 1 * 2 * 3 * 4

import java.util.Scanner;

public class program180
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char cCh = '\0';
        for(iCnt = 1, cCh = 'a'; iCnt<=iNo; iCnt++, cCh++)
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
