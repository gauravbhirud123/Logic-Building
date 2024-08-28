class program406
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();
    }
}

class Node
{
    public int data;
    public Node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyLL
{
    private node first;
    private int Count;

    public SinglyLL()
    {
        first = NULL;
        Count = 0;
    }
}