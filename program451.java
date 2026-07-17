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
    public node first;
    public int iCnt;

    public SinglyLL()
    {
        System.out.println("Inside constructor of SinglyLL");
        this.first = null;
        this.iCnt = 0;
    }
}

public class program451
{
    public static void main(String[] args) {

        SinglyLL sobj = new SinglyLL();
    }
}
