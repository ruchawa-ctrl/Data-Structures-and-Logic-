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

    iRet = sobj.Count();
    cout<<"Elements of stACK are: "<<iRet<<"\n";

    

    return 0;
}