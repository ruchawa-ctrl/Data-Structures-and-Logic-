#include<iostream>
using namespace std;


float MaximumF(float No1, float No2)
{
    float Ans;
    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }
    return Ans;
};

int main()
{ 
    float fRet = MaximumF(11.5f,10.2f);
    cout<<"Maximum is : "<<fRet<<"\n";

    return 0;
}