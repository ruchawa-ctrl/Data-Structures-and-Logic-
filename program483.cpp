#include<iostream>
using namespace std;

void Display(double Arr[], int Size)
{
    for(int Cnt = 0; Cnt < Size; Cnt++)
    {
        cout<<Arr[Cnt]<<"\n";
    }
};

double Summation(double Arr[], int Size)
{
    double sum = 0.0;
    for(int i = 0; i< Size; i++)
    {
        sum += Arr[i];
    }
    return sum;
}

int main()
{ 
    double Brr[] = {10.2, 20.2, 30.2, 40.2, 50.2};

    Display(Brr, 5);

    cout<<Summation(Brr, 5);
    return 0;
};