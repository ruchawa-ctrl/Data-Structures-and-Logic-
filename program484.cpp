#include<iostream>
using namespace std;

template<class T>
T Display(T Arr[], int Size)
{
    for(int Cnt = 0; Cnt < Size; Cnt++)
    {
        cout<<Arr[Cnt]<<"\n";
    }
};

template<class T>
T Summation(T Arr[], int Size)
{
    T sum;
    for(int i = 0; i< Size; i++)
    {
        sum += Arr[i];
    }
    return sum;
}

int main()
{ 
    T Brr[] = {10.2, 20.2, 30.2, 40.2, 50.2};
    T Crr[] = {10,20,30,40,50};

    Display(Brr, 5);
    cout<<Summation(Brr, 5);

    Display(Crr,5);
    cout<<Summation(Crr,5);
    return 0;
};