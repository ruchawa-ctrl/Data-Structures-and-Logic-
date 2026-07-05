//************  


//input: 7
//output: A b C d E f G

import java.util.Scanner;

public class program187
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char cCh = '\0';
        char cch = '\0';
        
        for(iCnt = 1, cCh = 'A',cch = 'a'; iCnt<=iNo; iCnt++, cCh++,cch++)
        {
            if(iCnt%2==0){
            System.out.print("\t"+cch+"\t");
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
