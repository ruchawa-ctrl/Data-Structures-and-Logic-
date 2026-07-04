import java.util.Scanner;

class ArrayX
{
        Scanner sc = new Scanner(System.in);
        int Arr[];
        int iSize;

        //PARAMETERISED CONSTRUCTOR WITH DEFAULT ARGUMENT
        ArrayX(int X)
        {
            iSize = X;                  
            Arr = new int[iSize];   
        }
       
        void Accept()
        {
            int iCnt = 0;
            System.out.println("Enter the elements:");
            for(iCnt=0;iCnt<iSize; iCnt++)
            {
                Arr[iCnt] = sc.nextInt();
            }
        }
        void Display()
        {
            int iCnt = 0;
            System.out.println("Enter the elements of array:");
            for(iCnt=0;iCnt<iSize; iCnt++)
            {
            System.out.println(Arr[iCnt]);
            }
        }

        int Summation()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

public class program170 {
    public static void main(String A[])
    {
    Scanner sc = new Scanner(System.in);
    int iLength = 0, iRet = 0;

    System.out.println("Enter the number of elements: ");
    iLength = sc.nextInt();

    ArrayX aobj = new ArrayX(iLength);
    
    aobj.Accept();
    aobj.Display();

    iRet = aobj.Summation();

    System.out.println("Summation is : "+iRet);
    sc.close();
    }
    
}
