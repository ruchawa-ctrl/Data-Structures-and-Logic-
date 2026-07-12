#include <stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;     //$    
  
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Count(PNODE first)
{


}

void Display(PNODE first)
{

}

void insertFirst(PPNODE first, int iNo)
{

}

void insertLast(PPNODE first, int iNo)
{

}

void insertAtPos(PPNODE first, int iNo, int iPos)
{

}

void deleteFirst(PNODE first)
{

}

void deleteLast(PNODE first)
{

}

void deleteAtPos(PNODE first, int iPos)
{

}

int main()
{
    PNODE head = NULL;



    return 0;
}