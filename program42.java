//TYPE 2
import java.util.*;

public class program42
{
    public static void CheckDivisible(int iNo)
    {
        if((iNo%3==0) && (iNo%5==0))
        {
            System.out.println("divisible");        
        }
        else
        {
            System.out.println("not diviible");        
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
