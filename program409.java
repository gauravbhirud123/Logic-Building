class program406
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(111);
        obj.InsertFirst(101);
        obj.InsertFirst(51);

        obj.Display();
    }
}

class Node
{
    public int data;
    public Node next;

    public Node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyLL
{
    private Node first;
    private int Count;

    public SinglyLL()
    {
        first = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
           
    }

    public void InsertLast(int no)
    {

    }

    public void InsertAtPos(int no,int iPos)
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

    public void Display()
    {

    }

    public int Count()
    {
        return Count;
    }

}