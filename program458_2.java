class NodeDLinear
{
    public int data;
    public NodeDLinear next;
    public NodeDLinear prev;

    public NodeDLinear(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLinearLL
{
    private NodeDLinear first;
    private int iCnt;

    public DoublyLinearLL()
    {
        this.first = null;
        this.iCnt = 0;
    }

    public void Display()
    {
        NodeDLinear temp = first;
        System.out.print("NULL <- ");
        while(temp != null)
        {
            System.out.print("| " + temp.data + " | <=> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public int Count()
    {
        return this.iCnt;
    }

    public void InsertFirst(int no)
    {
        NodeDLinear newn = new NodeDLinear(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }
        this.iCnt++;
    }

    public void InsertLast(int no)
    {
        NodeDLinear newn = new NodeDLinear(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            NodeDLinear temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
        this.iCnt++;
    }

    public void InsertAtPos(int no, int iPos)
    {
        if(iPos < 1 || iPos > iCnt + 1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(no);
        }
        else if(iPos == iCnt + 1)
        {
            InsertLast(no);
        }
        else
        {
            NodeDLinear newn = new NodeDLinear(no);
            NodeDLinear temp = first;

            for(int i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;

            this.iCnt++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
            first.prev = null;
        }
        this.iCnt--;
    }

    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            NodeDLinear temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.prev.next = null;
        }
        this.iCnt--;
    }

    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCnt)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCnt)
        {
            DeleteLast();
        }
        else
        {
            NodeDLinear temp = first;
            for(int i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;

            this.iCnt--;
        }
    }
}

public class program458_2
{
    public static void main(String[] args)
    {
        System.out.println("----- Testing Doubly Linear Linked List -----");
        DoublyLinearLL dlObj = new DoublyLinearLL();
        
        dlObj.InsertFirst(51);
        dlObj.InsertFirst(21);
        dlObj.InsertFirst(11);
        dlObj.InsertLast(101);
        dlObj.InsertLast(111);
        dlObj.Display(); // Output: NULL <- | 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | -> NULL

        dlObj.InsertAtPos(75, 4);
        dlObj.Display(); 
        
        dlObj.DeleteFirst();
        dlObj.DeleteLast();
        dlObj.Display();

        dlObj.DeleteAtPos(3);
        dlObj.Display();
        System.out.println("Total node count: " + dlObj.Count());

        System.out.println("\n----- Testing Doubly Circular Linked List -----");
        DoublyCircularLL dcObj = new DoublyCircularLL();
        
        dcObj.InsertFirst(51);
        dcObj.InsertFirst(21);
        dcObj.InsertFirst(11);
        dcObj.InsertLast(101);
        dcObj.InsertLast(111);
        dcObj.Display(); 

        dcObj.InsertAtPos(75, 4);
        dcObj.Display(); 
        
        dcObj.DeleteFirst();
        dcObj.DeleteLast();
        dcObj.Display();

        dcObj.DeleteAtPos(3);
        dcObj.Display();
        System.out.println("Total node count: " + dcObj.Count());
    }
}