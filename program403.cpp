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
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()        //class name::constructor name
{
    cout<<"Inside constructor";
    this -> first = NULL;
    this -> iCnt = 0;
}

void SinglyLL :: Display()
{}

int SinglyLL :: Count()
{
    return this -> iCnt;
}

void SinglyLL :: InsertFirst(int iNo)
{}

void SinglyLL :: InsertLast(int iNo)
{}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}


int main()
{
    SinglyLL sobj;


    return 0;
}