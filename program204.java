
/*
iRow = 4
iCol = 4

a   b   c   d
a   b   c   d
a   b   c   d
a   b   c   d

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch = '\0';
        for(i=1;i<=iRow;i++)
        {
            for(j = 1,ch='a'; j<=iCol; j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            System.out.println();
        }
       
    }
}

public class program204

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
