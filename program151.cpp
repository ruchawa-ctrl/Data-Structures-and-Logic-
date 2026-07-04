#include <iostream>
using namespace std;

class ArrayX
{
    //ACCCESS SPECIFIER OF SUMMATION IS PRIVATE
    int Summation(int Arr[], int iSize)
    {
        int iCnt = 0, iSum = 0;
        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            iSum = iSum+ Arr[iCnt];
        }
        return iSum;
    }
};

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    ArrayX aobj;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    Brr = new int[iLength];
    
    cout<<"Enter thr elements : \n";

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of array are : \n";
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    iRet = aobj.Summation(Brr, iLength);
    cout<<"Summaion is : "<<iRet<<endl;
    delete []Brr;

    return 0;
}
