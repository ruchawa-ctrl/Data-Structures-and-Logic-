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
    while(first)                                //TYPE 1
    {
        printf("| %d | -> ",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     //create

    newn -> data = iNo;
    newn -> next = NULL;                    //initialise

    if(NULL == *first)                      //LL is empty
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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     //create

    newn -> data = iNo;
    newn -> next = NULL;                    //initialise

    if(*first == NULL)                      //LL is empty
    {
        *first = newn;
    }
    else                                    //LL contains atleast 1 node
    {
        temp = *first;
        while(temp -> next != NULL)         //TYPE 2
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCnt = 0;
    iCnt = Count(*first);

    if((iPos < 1) || (iPos > (iCnt+1)))
    {
        printf("Invalid Position");
        return;
    }
    else if (iPos == 1)
    {
        InsertFirst(first,iNo);
    }
    else if(iPos == iCnt+1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        PNODE temp = NULL;
        PNODE newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = iNo;
        newn -> next = NULL;

        temp = *first;

        for(int i = 1; i<iPos-1; i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                      //LL is empty
    {
        return;
    }
    else if((*first) -> next == NULL)         //LL has one node only
    {
        free(*first);
        *first = NULL;
    }
    else                                    //LL contains more than one node
    {
        temp = *first;
        *first = ((*first) -> next);
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                      //LL is empty
    {
        return;
    }
    else if((*first) -> next == NULL)         //LL has one node only
    {
        free(*first);
        *first = NULL;
    }
    else                                    //LL contains more than one node
    {
        temp = *first;
        while(temp -> next -> next !=NULL)      //TYPE 3
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void DeleteAtPos(PPNODE first, int iNo, int iPos)
{
    int iCnt = 0;
    iCnt = Count(*first);

    if((iPos < 1) || (iPos > (iCnt)))
    {
        printf("Invalid Position");
        return;
    }
    else if (iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCnt)
    {
        DeleteLast(first);
    }
    else
    {

    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&head, 111);
    InsertLast(&head, 121);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head, 105, 5);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}