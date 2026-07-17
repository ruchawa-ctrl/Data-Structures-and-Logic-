class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int iCnt;

    public SinglyLL()
    {
        System.out.println("Inside constructor of SinglyLL");
        this.first = null;
        this.iCnt = 0;
    }

    public void InsertFirst(int no)
    {
        
    }

    public void Display()
    {
        
    }

    public int Count()
    {

        return 0;
    }

    public void InsertLast(int no)
    {

    }

    public void InsertAtPos(int no, int iPos)
    {

    }

    public void DeleteFirst()
    {

    }

    public void DeleteLast()
    {

    }

    public void DeleteAtPos(int iPos)
    {

    }

}

public class program452
{
    public static void main(String[] args) {

        SinglyLL sobj = new SinglyLL();

        sobj.Display();
    }
}
