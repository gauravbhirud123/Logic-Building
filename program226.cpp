// Singly Circular
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class SinglyCL
{
    private:
    PNODE first;
    PNODE last;
    int Count;

    public:
    SinglyCL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void Display();
    int CountNode();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int no,int ipos);
    void DeleteAtPos(int ipos);
};

SinglyCL::SinglyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

void SinglyCL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
      
    }
    else
    {
        newn -> next = first;
        first = newn;
        
    }
    last -> next = first;
    Count++;
}
void SinglyCL::InsertLast(int no)
{
    PNODE Temp = first;
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = no;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
        
    }
    else
    {
        last -> next = newn;
        last = newn;
    }
    last -> next = first;
    Count++;

}

void SinglyCL::Display()
{
    cout<<"Elements of linked list are :"<<"\n";
    if((first != NULL) && (last != NULL))
    {
        do
        {
            cout<<"|"<<first->data<<"|"<<"->";
            first = first -> next;
        }while(first != last->next);
    }
}
int SinglyCL::CountNode()
{
    return Count;
}
void SinglyCL::DeleteFirst()
{
    
    if(first == NULL && last == NULL)
    {
        return;    
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete(last -> next);
        last -> next = first;
    }

}   
void SinglyCL::DeleteLast()
{
    PNODE temp = first;
    if(first == NULL && last == NULL)
    {
        return;    
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        while(temp -> next != last)
        {
            temp = temp -> next;
        }
        delete(last);
        last = temp;
        last -> next = first;
    }

}
void SinglyCL::InsertAtPos(int no,int ipos)
{
    if((ipos < 1) || (ipos > Count+1))
    {
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        PNODE temp = first;
        int i = 0;

        for(i = 1;i < ipos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        Count++;
    }
}
void SinglyCL::DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos>Count))
    {
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;
        int i = 0;

        for(i=1;i<ipos-1;i++)
        {
            temp = temp->next;
        }

        PNODE targatednode = temp->next;
        temp->next = temp->next->next;
        delete targatednode;

        Count--;
    }
}
int main()
{
    
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";


    return 0;
}