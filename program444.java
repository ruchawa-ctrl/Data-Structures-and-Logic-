class node
{
    public int data;
    public node next;
}

class program444
{
    public static void main(String[] args) {
        node newn = null;

        newn = new node();  //memory allocated

        newn.data = 11;
        newn.next = null;

        System.out.println("Data of node is : " + newn.data);
        System.out.println("Address of next node is : " + newn.next);
    }
}