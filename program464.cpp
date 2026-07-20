#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Stack
{
    private:
        struct node *first;
        int iCount;
    public:
        Stack();
        void Push(int iNo);     //insertfirst
        int Pop();              //delete first
        int Peep();             //delete first
        void Display();
        int Count();
};

Stack :: Stack()
{
    this -> first = NULL;
    this -> iCount = 0;
}
void Stack :: Push(int iNo)    //insertfirst
{
    struct node *newn = NULL;
    newn = new struct node();

    newn -> data = iNo;
    newn -> next = NULL;
   
    newn -> next = first;
    first = newn;
    
    iCount++;
}
int Stack :: Pop()       //delete first
{
    return 0;
}
int Stack :: Peep()             //delete first
{
    return 0;
}
void Stack :: Display()
{}
int Stack :: Count()
{
    return iCount;
}

int main()
{
    Stack sobj;

    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    iRet = sobj.Count();
    cout<<"Elements of stACK are: "<<iRet<<"\n";

    

    return 0;
}