import java.util.*;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        //logic
        int iCnt;
        for(iCnt=1; iCnt<iNo; iCnt++)
        {
            if(iNo%iCnt==0)
            {
                System.out.println(iCnt);
            }
        }

    }
}
public class program46 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int iNum = 0;

        System.out.println("Enter number: ");
        iNum = sc.nextInt();

        NumberX nobj = new NumberX();
        nobj.DisplayFactors(iNum);

        sc.close();
    }
}

//Time complexity : O(N)
//Where  N>=0
