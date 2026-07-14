#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    do
    {
        printf("|%d|->", first->data);
        first = first->next;
    }while(first != last->next);
}

int Count(PNODE first, PNODE last)
{
    int iCnt = 0;
    if(first == NULL && last == NULL)
    {
        return 0;
    }
    do
    {
        iCnt++;
        first = first->next;
    }while(first != last->next);
    return iCnt;  
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL) // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else // LL contains at least one node
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
    (*last)->next = *first;
    (*first)->prev = *last;

}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL) // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else // LL contains at least one node
    {
        (*last)->next = newn;
        newn->prev = *last;
        *last = newn;
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;  
    newn->prev = NULL;

    if(iPos < 1 || iPos > (Count(*first, *last) + 1))
    {
        printf("Invalid position\n");
        free(newn);
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(first, last, iNo);
    }
    else if(iPos == (Count(*first, *last) + 1))
    {
        InsertLast(first, last, iNo);
    }
    else
    {
        temp = *first;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL) // LL is empty
    {
        return;
    }
    else if(*first == *last) // LL contains one node
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else // LL contains more than one node
    {
        temp = *first;
        *first = (*first)->next;
        free(temp);
        (*last)->next = *first;
        (*first)->prev = *last;
    }

}

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL) // LL is empty
    {
        return;
    }
    else if(*first == *last) // LL contains one node
    {
        free(*last);
        *first = NULL;
        *last = NULL;
    }
    else // LL contains more than one node
    {
        temp = *last;
        *last = (*last)->prev;
        free(temp);
        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{
    PNODE temp = NULL;

    if(iPos < 1 || iPos > Count(*first, *last))
    {
        printf("Invalid position\n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(first, last);
    }
    else if(iPos == Count(*first, *last))
    {
        DeleteLast(first, last);
    }
    else
    {
        temp = *first;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        PNODE target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        free(target);
    }
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    InsertLast(&head, &tail, 101);
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    InsertAtPos(&head, &tail, 75, 4);
    InsertAtPos(&head, &tail, 85, 5);

    iRet = Count(head, tail);
    printf("Number of nodes in the doubly linked list is: %d\n", iRet);

    Display(head, tail);

    DeleteFirst(&head, &tail);
    DeleteLast(&head, &tail);

    DeleteAtPos(&head, &tail, 3);
    DeleteAtPos(&head, &tail, 2);

    iRet = Count(head, tail);
    printf("Number of nodes in the doubly linked list is: %d\n", iRet);

    Display(head, tail);
}
