class node
{
    public int data;
    public node next;
}

public class program446
{
    public static void main(String[] args) {

        node head = null;
        node obj1 = null;
        node obj2 = null;
        node obj3 = null;

        obj1 = new node();  //memory allocated
        obj2 = new node();  //memory allocated
        obj3 = new node();  //memory allocated

        obj1.data = 11;
        obj1.next = obj2;

        obj2.data = 21;
        obj2.next = obj3;
        
        obj3.data = 51;
        obj3.next = null;

        System.out.println("Data of first node is : " + obj1.data);
        System.out.println("Data of second node is : " + obj1.next.data);
        System.out.println("Data of third node is : " + obj1.next.next.data);
    }
} 