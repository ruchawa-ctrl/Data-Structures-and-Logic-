//TYPE 3
import java.util.*;

class NumberX
{
    public boolean CheckDivisible(int iNo)
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
}

public class program45
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        boolean bRet = false;

        System.out.println("Enter the number: ");
        iNum = sobj.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckDivisible(iNum);   //error as non-static
        // method CheckDivisible(int) cannot be referenced from a static context
        if(bRet)
        {
            System.out.println("Number " + iNum+" is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number " + iNum+" is NOT divisible by both 3 and 5");
        }
        sobj.close();
    }

}
