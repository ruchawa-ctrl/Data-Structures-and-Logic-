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

int Count(PNODE first)
{
    int iCnt = 0;

    while(first != NULL)
    {
        iCnt++;
        first = first -> next;
    }

    return iCnt;
}

void Display(PNODE first) 
{
    printf("\nNULL <=> ");

    while(first != NULL)
    {
        printf("| %d | <=> ", first -> data);
        first = first -> next;
    }

    printf("NULL\n");
}

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
        temp = *first;

        while(temp -> next != NULL)         //TYPE 2
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;        //$
    }
}

void insertAtPos(PPNODE first, int iNo, int iPos)
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
        insertFirst(first,iNo);
    }
    else if(iPos == iCnt+1)
    {
        insertLast(first, iNo);
    }
    else
    {
        PNODE temp = NULL;
        PNODE newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;                    //$

        temp = *first;

        for(int i = 1; i<iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;        //$
        temp -> next = newn;
        newn -> prev = temp;                //$
    }
}

void deleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                      //LL is empty
    {
        return;
    }
    else if((*first) -> next == NULL)         //LL has one node only
    {
        free(*first);
        (*first) = NULL;
        return;
    }
    else
    {
        temp = *first;
        *first = ((*first) -> next);
        (*first) -> prev = NULL;        //$
        free(temp);
    }
}

void deleteLast(PPNODE first)
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
        (temp -> prev) -> next = NULL;        //$
    }
}

void deleteAtPos(PPNODE first, int iPos)
{
    int iCnt = 0;

    iCnt = Count(*first);
    if((iPos < 1) || (iPos > iCnt))
    {
        printf("Invalid Position");
        return;
    }
    else if (iPos == 1)
    {
        deleteFirst(first);
    }
    else if(iPos == iCnt)
    {
        deleteLast(first);
    }
    else
    {
        PNODE temp = NULL;
        PNODE target = NULL;

        temp = *first;

        for(int i = 1; i<iPos-1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = target -> next;
        target -> next -> prev = temp;        //$
        free(target);
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    insertFirst(&head, 51);
    insertFirst(&head, 21);
    insertFirst(&head, 11);

    insertLast(&head, 101);
    insertLast(&head, 111);
    insertLast(&head, 121);
    insertLast(&head, 151);

    Display(head);

    iRet = Count(head);

    printf("Number of elements are: %d\n",iRet);

    deleteFirst(&head);
    Display(head);

    deleteLast(&head);
    Display(head);

    insertAtPos(&head, 105, 4);
    Display(head);

    deleteAtPos(&head, 3);
    Display(head);

    return 0;
}