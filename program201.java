


/*
iRow = 4
iCol = 4

$   $   $   $
#   #   #   #
$   $   $   $
#   #   #   #

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j = 0;
        for(i=1;i<=iRow;i++)
        {
            if(i%2==0)
            {
                for(j = 1; j<=iCol; j++)
                {
                    System.out.print("$\t");
                }
                System.out.println();
            }
            
            else
            {
                for(j = 1; j<=iCol; j++)
                {
                    System.out.print("#\t");
                }
                System.out.println();
            }
            
        }
            System.out.println();
        }

       
    }


public class program201

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
