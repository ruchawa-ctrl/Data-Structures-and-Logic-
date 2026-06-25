//TYPE 2
////////////////////////////////////////////////////////////////////
//
// Include required header files
//
////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////
// 
// 
// Input :          int
// Output :         void
// Description :    Print "Jay Ganesh..." N number of times
// Date :           10/05/2026
// Author :         Rucha Raghav Wavekar
//
////////////////////////////////////////////////////////////////////

public class program41
{
    static boolean CheckDivisible(int iNo)
    {
        if((iNo%3==0) && (iNo%5==0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        CheckDivisible(iNum);   //error as non-static method CheckDivisible(int) cannot be referenced from a static context
        
        sobj.close();
    }

}
