#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //DEFAULT
        ArrayX()
        {
        }
        //PARAMETERISED
        ArrayX(int X)
        {
        }
};

int main()
{
    ArrayX aobj1;                   // Default constructor
    ArrayX aobj2(5);                // Parameterised constructor        

    cout<<sizeof(aobj1)<<endl;      //12
    
    return 0;
}
