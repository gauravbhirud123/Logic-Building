#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
    public:
    PNODE First;
    int Count;

    SinglyLL()
    {
        cout<<"Inside constructor\n";
        First = NULL;
        Count = 0;
    }

    void InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(First == NULL)
        {
            First = newn;
        }
        else
        {
            newn->next = First;
            First = newn;
        }
        Count++;
    }

    void InsertLast(int no)
    {

    }

    void Display()
    {

    }
};

int main()
{
    SinglyLL obj;

    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51); 
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    cout<<"Number of elements in the linked list are: "<<obj.Count<<"\n";

    return 0;
    
}