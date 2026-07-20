#include<iostream>
using namespace std;

void Display(int Arr[], int Size)
{
    for(int Cnt = 0; Cnt < Size; Cnt++)
    {
        cout<<Arr[Cnt]<<"\n";
    }
};

int main()
{ 
    int Brr[] = {10, 20, 30, 40, 50};

    Display(Brr, 5);

    return 0;
};