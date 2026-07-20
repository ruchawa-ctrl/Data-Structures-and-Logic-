#include<iostream>
using namespace std;

template <class X>
X Maximum(X No1, X No2)
{
    return (No1 > No2) ? No1 : No2;
};

int main()
{ 
    cout<<Maximum(11,10)<<"\n";
    cout<<Maximum(11.5f,10.2f)<<"\n";
    cout<<Maximum(11.5,10.2)<<"\n";

    return 0;
};