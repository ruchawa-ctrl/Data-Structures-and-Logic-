#include<iostream>
using namespace std;


float MaximumF(float No1, float No2)
{
    return (No1 > No2) ? No1 : No2;
};

int main()
{ 
    float fRet = MaximumF(11.5f,10.2f);
    cout<<"Maximum is : "<<fRet<<"\n";

    return 0;
}