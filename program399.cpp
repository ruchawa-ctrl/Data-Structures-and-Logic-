#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCnt = 0;

        SinglyLL()
        {
            cout<<"Inside constructor";
            this -> first = NULL;
            this -> iCnt = 0;
        }

};

int main()
{
    SinglyLL sobj;

    cout<<sobj.first<<endl;
    cout<<sobj.iCnt<<endl;
    

    return 0;
}