//====================TEMPLATE==================================

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{

}

int Count(PNODE first)
{
    int iCount = 0;

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{

}

void InsertLast(PPNODE first, int iNo)
{

}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{

}

void DeleteFirst(PPNODE first, int iNo)
{

}

void DeleteLast(PPNODE first, int iNo)
{

}

void DeleteAtPos(PPNODE first, int iNo, int iPos)
{

}

int main()
{
    PNODE head = NULL;

    return 0;
}