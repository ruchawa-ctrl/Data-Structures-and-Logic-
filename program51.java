import java.util.*;

class NumberX
{
    public boolean CheckPerfect(int iNo)
    {
        //logic
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1; iCnt <= (iNo / 2); iCnt++)//REDUCES THE TIME COMPLEXITY
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
                if(iSum>iNo)
                {
                    break;
                }
            }
        }
        
        if(iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
public class program51
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int iNum = 0;
        boolean bRet = false;

        System.out.println("Enter number: ");
        iNum = sc.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckPerfect(iNum);

        if(bRet)
        {
            System.out.println("Is the number perfect: "+ bRet);
        }
        else
        {
            System.out.println("Is the number perfect: "+ bRet);
        }
        sc.close();
    }
}

//Time complexity : O(N/2)
//Where  N>=0