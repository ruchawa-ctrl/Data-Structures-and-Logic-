
/*
iRow = 4
iCol = 4

a
a   b
a   b   c
a   b   c   d

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
        for(i=1; i<=iRow;i++)
        {
            for(j = 1,ch = 'a'; j<=i; j++,ch++)
            {
                System.out.print( ch+"\t");
            }
            System.out.println();
        }
       
    }
}

public class program225

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