import java.util.*;

class NumberX
{
    public void SumFactors(int iNo)
    {
        //logic
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1; iCnt <= (iNo / 2); iCnt++)//REDUCES THE TIME COMPLEXITY
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

    }
}
public class program48
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int iNum = 0;

        System.out.println("Enter number: ");
        iNum = sc.nextInt();

        NumberX nobj = new NumberX();
        nobj.SumFactors(iNum);

        sc.close();
    }
}

//Time complexity : O(N/2)
//Where  N>=0