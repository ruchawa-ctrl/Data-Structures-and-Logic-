import java.util.*;

class program143
{
    public static int Summation(int Arr[])
    {
        int iSum = 0;
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
           iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the number of elements: ");
        int iLength = sc.nextInt();

        //Brr = (int *)malloc(sizeof(int)*iLength);
        int Brr[] = new int[iLength];

        System.out.println("Enter te elements: ");

        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            Brr[iCnt] = sc.nextInt();
        }
        System.out.println("Elements of the array are: ");
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

        int iRet = Summation(Brr);
        System.out.println(iRet);
        Brr = null;
        System.gc();
    }
}