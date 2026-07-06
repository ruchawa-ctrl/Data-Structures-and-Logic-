/*
iRow = 4
iCol = 4

4   4   4   4
3   3   3   3
2   2   2   2
1   1   1   1

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j = 0;
        for(i=iRow; i>=1;i--)
        {
            for(j = 1; j<=iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
       
    }
}

public class program208

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