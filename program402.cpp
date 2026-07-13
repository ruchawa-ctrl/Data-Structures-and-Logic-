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

class SinglyLL
{
    private:            //abstraction
        PNODE first;
        int iCnt = 0;

    public:
        SinglyLL()
        {
            cout<<"Inside constructor";
            this -> first = NULL;
            this -> iCnt = 0;
        }

        void Display()
        {}

        int Count()
        {
            return this -> iCnt;
        }

        void InsertFirst(int iNo)
        {}

        void InsertLast(int iNo)
        {}

        void InsertAtPos(int iNo, int iPos)
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}

        void DeleteAtPos(int iPos)
        {}
};

int main()
{
    SinglyLL sobj;


    return 0;
}