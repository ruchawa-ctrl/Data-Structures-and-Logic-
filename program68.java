
//BAD PROGRAMMING PRACTICE

import java.util.*;

class NumberX
{
    public boolean CheckPrime(int iNo)
    {
        //logic
        int iCnt = 0;
        boolean bFlag = true;
        for(iCnt=2; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag = false;
                break;
            }
        }

        return bFlag;          
    }
}
public class program68
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int iNum = 0;
        boolean bRet = false;

        System.out.println("Enter number: ");
        iNum = sc.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckPrime(iNum);

        if(bRet)
        {
            System.out.println("Is the number prime: "+ bRet);
        }
        else
        {
            System.out.println("Is the number prime: "+ bRet);
        }
        sc.close();
    }
}

//Time complexity : O(N/2)
//Where  N>=0 

