
/*
iRow = 4
iCol = 4

a
b   c
d   e   f
g   h   i   j

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j = 0;
        char ch = '\0';
        if(iRow!=iCol)
        {
            System.out.println("Invalid Parameters");
            System.out.println("Number of rows and columns should be same");
            return;
        }
        for(i=1,ch='a'; i<=iRow;i++)
        {
            for(j = 1; j<=i; j++, ch++)
            {
                System.out.print( ch+"\t");
            }
            System.out.println();
            
        }
      
    }
}

public class program227
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        int iValue1 = 0,iValue2 = 0;

        System.out.println("Enter the number of rows: ");
        iValue1 = sc.nextInt();

        System.out.println("Enter the number of coloumns: ");
        iValue2 = sc.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
        sc.close();
    }
}