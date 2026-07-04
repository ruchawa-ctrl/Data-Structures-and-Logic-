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
    //STATIC MEMORY ALLOCATION FOR OBJECT
    //ArrayX aobj1(5);             

    ArrayX *aobj1 = new ArrayX(5);
          
    delete aobj1;
    cout<<"End of main\n";
    return 0;
}
