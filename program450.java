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

public class program450
{
    public static void main(String[] args) {

        node newn = new node(11);  //memory allocated

        System.out.println("Data of node is : " + newn.data);
        System.out.println("Address of next node is : " + newn.next);
    }
}
