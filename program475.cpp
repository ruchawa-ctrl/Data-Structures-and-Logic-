#include<iostream>
using namespace std;


float MaximumF(int No1, int No2)
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
    float fRet = MaximumF(11.5f,10.2f);
    cout<<"Maximum is : "<<fRet<<"\n";

    return 0;
}