//************  


//input: 7
//output: A * B * C * D

import java.util.Scanner;

public class program184
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
       // char cCh = '\0';
        char ch ='A';
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if(iCnt%2==0){
            System.out.print("\t"+"*"+"\t");
            }
            else
            {
                System.out.print(ch);
                ch++;

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
