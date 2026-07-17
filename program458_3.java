class NodeDCircular
{
    public int data;
    public NodeDCircular next;
    public NodeDCircular prev;

    public NodeDCircular(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyCircularLL
{
    private NodeDCircular first;
    private NodeDCircular last;
    private int iCnt;

    public DoublyCircularLL()
    {
        this.first = null;
        this.last = null;
        this.iCnt = 0;
    }

    public void Display()
    {
        if(first == null && last == null)
        {
            System.out.println("List is empty");
            return;
        }

        System.out.print("-> ");
        NodeDCircular temp = first;
        do
        {
            System.out.print("| " + temp.data + " | <=> ");
            temp = temp.next;
        }while(temp != first);
        
        System.out.println("(Back to First)");
    }

    public int Count()
    {
        return this.iCnt;
    }

    public void InsertFirst(int no)
    {
        NodeDCircular newn = new NodeDCircular(no);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }
        
        // Maintaining circular properties
        last.next = first;
        first.prev = last;
        
        this.iCnt++;
    }

    public void InsertLast(int no)
    {
        NodeDCircular newn = new NodeDCircular(no);

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;
            newn.prev = last;
            last = newn;
        }
        
        // Maintaining circular properties
        last.next = first;
        first.prev = last;
        
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
            NodeDCircular newn = new NodeDCircular(no);
            NodeDCircular temp = first;

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
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
            last.next = first;
            first.prev = last;
        }
        this.iCnt--;
    }

    public void DeleteLast()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(first == last)
        {
            first = null;
            last = null;
        }
        else
        {
            last = last.prev;
            last.next = first;
            first.prev = last;
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
            NodeDCircular temp = first;
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


public class program458_3
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