#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //PARAMETERISED
        ArrayX(int X)
        {
            cout<<"Inside Constructor\n";
            iSize = X;                  //CHARACTERISTICS INITIALISATION
            Arr = new int[iSize];       //RESOURCE ALLOCATION
        }
        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete[]Arr;                //RESOURCE DEALLOCATION
        }
};

int main()
{
    ArrayX aobj1(5);             
             
    return 0;
}
