#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCnt;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLat(int iNo);
        void InsertAtPos(int iNo, int Pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);
};

DoublyCL :: DoublyCL()
{
    cout<<"Inside Constructor";
    first = NULL;
    last = NULL;
    iCnt = 0;
}

void DoublyCL :: Display()
{

}

int DoublyCL :: Count()
{
    return iCnt;
}

void DoublyCL :: InsertFirst(int iNo)
{

}

void DoublyCL :: InsertLat(int iNo)
{

}

void DoublyCL :: InsertAtPos(int iNo, int Pos)
{

}

void DoublyCL :: DeleteFirst()
{

}

void DoublyCL :: DeleteLast()
{

}

void DoublyCL :: DeleteAtPos(int Pos)
{

}

int main()
{
    DoublyCL();

    return 0;
}