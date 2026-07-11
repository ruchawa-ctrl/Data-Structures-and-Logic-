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
    while(first != NULL)
    {
        printf("%d\t",first -> data);
        first = first -> next;
    }
}

int Count(PNODE first)
{
    int iCount = 0;

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     //create

    newn -> data = iNo;
    newn -> next = NULL;                    //initialise

    if(*first == NULL)                      //LL is empty
    {
        *first = newn;
    }
    else                                    //LL contains atleast 1 node
    {
        newn -> next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     //create

    newn -> data = iNo;
    newn -> next = NULL;                    //initialise

    if(*first == NULL)                      //LL is empty
    {
        *first = newn;
    }
    else                                    //LL contains atleast 1 node
    {

    }
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

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    return 0;
}