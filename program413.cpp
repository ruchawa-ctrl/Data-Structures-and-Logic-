#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:            //abstraction
        PNODE first;
        int iCnt = 0;

    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()        //class name::constructor name
{
    this -> first = NULL;
    this -> iCnt = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this -> first;

    while(temp != NULL)
    {
        cout<<" | "<<temp -> data<<" | -> ";
        temp = temp -> next;
    }

    cout<<"NULL"<<endl;
}

int DoublyLL :: Count()
{
    return this -> iCnt;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(this -> first ==NULL)
    {
        this -> first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
        newn -> prev = NULL;

    }

    this -> iCnt++;         //IMPORTANT
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;    

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(this -> first ==NULL)
    {
        this -> first = newn;
    }
    else
    {
        temp = this -> first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
    }

    this -> iCnt++;         //IMPORTANT
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > this -> iCnt + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == this -> iCnt + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = this -> first;

        for(int i=1; i< iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
        newn -> prev = temp;
        newn -> next -> prev = newn;

        this -> iCnt++;
    }
}

void DoublyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(this -> first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete this -> first;
        this -> first = NULL;
        this -> first -> prev = NULL;
    }
    else
    {
        temp = this -> first;
        this -> first = this -> first -> next;
        this -> first -> prev = NULL;        
        delete temp;

    }

    this -> iCnt--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this -> first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete this -> first;
        this -> first = NULL;
        this -> first -> prev = NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;
        temp -> next -> prev = temp;
    }

    this -> iCnt--;
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    if((iPos < 1) || (iPos > this -> iCnt))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == this -> iCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = this -> first;

        for(int i=1; i< iPos-1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = target -> next;
        target -> next -> prev = temp;
        delete target;

        this -> iCnt--;
    }
}

int main()
{
    int iRet = 0;
    DoublyLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);   
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are: "<<iRet<<endl;

    dobj.DeleteFirst();
    iRet = dobj.Count();

    cout<<"Number of nodes are: "<<iRet<<endl;
    dobj.Display();

    dobj.DeleteLast();
    iRet = dobj.Count();
    
    cout<<"Number of nodes are: "<<iRet<<endl;
    dobj.Display();
    
    return 0;
}
