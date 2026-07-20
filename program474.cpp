#include<iostream>
using namespace std;


int MaximumI(int No1, int No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
};

int main()
{ 
    int iRet = MaximumI(11,10);
    cout<<"Maximum is : "<<iRet<<"\n";

    return 0;
}