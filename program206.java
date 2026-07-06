
/* 
iRow = 4
iCol = 4

a   b   c   d
1   2   3   4
a   b   c   d
1   2   3   4

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j = 0;
        char ch = '\0';
        for(i=1;i<=iRow;i++)
        {
            for(j = 1, ch = 'a'; j<=iCol; j++,ch++)
            {
                if (i%2==0)
                {
                    System.out.print(j+"\t");
                    j++;
                }
                else
                {
                    System.out.print(ch+"\t");

                }
            }
            System.out.println();
        }
       
    }
}

public class program206
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