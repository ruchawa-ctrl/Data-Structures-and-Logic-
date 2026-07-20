#include<iostream>
using namespace std;

template <class X>
X Maximum(X No1, X No2, X No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
};

int main()
{ 
    cout<<Maximum(11,10,12)<<"\n";
    cout<<Maximum(11.5f,10.2f,13.7f)<<"\n";
    cout<<Maximum(11.5,10.2,14.8)<<"\n";

    return 0;
};