//************  


//input: 7
//output: A 2 C 4 E 6 G

import java.util.Scanner;

public class program186
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char cCh = '\0';
        
        for(iCnt = 1, cCh = 'A'; iCnt<=iNo; iCnt++, cCh++)
        {
            if(iCnt%2==0){
            System.out.print("\t"+iCnt+"\t");
            }
            else
            {
                System.out.print(cCh);
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
