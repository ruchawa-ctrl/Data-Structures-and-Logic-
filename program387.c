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
{}

void Display(PNODE first)
{}


void insertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;
        
    newn = (PNODE)malloc(sizeof(NODE));     //create
    
    newn -> data = iNo;
    newn -> next = NULL; 
    newn -> prev = NULL;                    //$

    if(NULL == *first)                      //LL is empty
    {
        *first = newn;
    }
    else                                    //LL contains atleast 1 node
    {
        newn -> next = *first;
        (*first) -> prev = newn;            //$
        *first = newn;
    }
}

void insertLast(PPNODE first, int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
        
    newn = (PNODE)malloc(sizeof(NODE));     //create
    
    newn -> data = iNo;
    newn -> next = NULL; 
    newn -> prev = NULL;                    //$

    if(NULL == *first)                      //LL is empty
    {
        *first = newn;
    }
    else
    {

    }
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

    insertFirst(&head, 51);
    insertFirst(&head, 21);
    insertFirst(&head, 11);


    return 0;
}