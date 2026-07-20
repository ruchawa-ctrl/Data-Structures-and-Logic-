#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
};

int main()
{
    double Value1 = 10.5f, Value2 = 11.2f, Ret = 0.0f;

    Ret = Addition(Value1, Value2);
    cout<<"Additio is: "<<Ret<<"\n";

    return 0;
}