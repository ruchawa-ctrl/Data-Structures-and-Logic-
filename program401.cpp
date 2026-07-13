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
    private:
        PNODE first;
        int iCnt = 0;

    public:
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

    sobj.first = NULL;   //error
    sobj.iCnt = 15;     //error

    return 0;
}