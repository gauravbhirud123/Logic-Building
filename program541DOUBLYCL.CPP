#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *prev;
    struct node *next;
};

template <class T>
class DoublyCL
{
    private:
    struct node<T> *Head;
    struct node<T> *Tail;
    int Count;

    public:
    DoublyCL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void Display();
    int CountNode();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(T no,int iPos);
    void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
    cout<<"Inside Constructor"<<"\n";
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    
    struct node<T> *newn = NULL;
    newn = new struct node<T>;

    newn -> data = no;
    newn -> next = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn -> next = Head;
        Head -> prev = newn;
        Head = newn;
    }

    Tail -> next = Head;
    Head -> prev = Tail;

    Count ++;
}

template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
    struct node<T> *newn = NULL;
    newn = new struct node<T>;

    newn -> data = no;
    newn -> next = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn -> prev = Tail;
        Tail -> next = newn;
        Tail = newn;
    }

    Tail -> next = Head;
    Head -> prev = Tail;

    Count ++;
}

template <class T>
void DoublyCL<T> :: Display()
{
    cout<<"Elements of linked list are :"<<"\n";
    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            cout<<"|"<<Head->data<<"|"<<"->";
            Head = Head -> next;
        }while(Head != Tail->next);
    }
}

template <class T>
int DoublyCL<T> :: CountNode()
{
    return Count;
}

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if(Head == NULL && Tail == NULL)
    {
        return;    
    }
    else if(Head == Tail)
    {
        delete(Head);
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head -> next;
        free(Tail -> next);
        free(Head -> prev);

        Head -> prev = Tail;
        Tail -> next = Head;
    }
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
    if(Head == NULL && Tail == NULL)
    {
        return;    
    }
    else if(Head == Tail)
    {
        delete(Head);
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Tail = Tail -> prev;
        delete(Tail -> next);
        delete(Head -> prev);

        Head -> prev = Tail;
        Tail -> next = Head;
    }
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T no,int iPos)
{
    if((iPos < 1) || (iPos > Count+1))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> *newn = NULL;
        newn = new struct node<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        struct node<T> *temp = Head;
        int i = 0;

        for(i = 1;i < iPos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        Count++;
    }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos>Count))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Count)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp = Head;
        int i = 0;

        for(i=1;i<iPos-1;i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
       
        Count--;
    }
}

int main()
{
    DoublyCL<int> iobj;
    DoublyCL<float> fobj;
    DoublyCL<double> dobj;
    DoublyCL<char> cobj;
    int iRet = 0;

    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();
    iRet = iobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    iobj.InsertLast(101);
    iobj.InsertLast(121);
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();
    iRet = iobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    iobj.DeleteFirst();
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();
    iRet = iobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    iobj.DeleteLast();
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();
    iRet = iobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    iobj.InsertAtPos(105,3);
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();
    iRet = iobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    iobj.DeleteAtPos(3);
    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();
    iRet = iobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cout<<"_______________________________________________"<<"\n";
    fobj.InsertFirst(51.99);
    fobj.InsertFirst(21.99);
    fobj.InsertFirst(11.99);
    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();
    iRet = fobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    fobj.InsertLast(101.99);
    fobj.InsertLast(121.99);
    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();
    iRet = fobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    fobj.DeleteFirst();
    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();
    iRet = fobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    fobj.DeleteLast();
    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();
    iRet = fobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    fobj.InsertAtPos(105.99,3);
    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();
    iRet = fobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    fobj.DeleteAtPos(3);
    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();
    iRet = fobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cout<<"_______________________________________________"<<"\n";
    dobj.InsertFirst(51.9999);
    dobj.InsertFirst(21.9999);
    dobj.InsertFirst(11.9999);
    cout<<"LinkedList of doubles : "<<"\n";
    dobj.Display();
    iRet = dobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    dobj.InsertLast(101.999);
    dobj.InsertLast(121.999);
    cout<<"LinkedList of doubles : "<<"\n";
    dobj.Display();
    iRet = dobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    dobj.DeleteFirst();
    cout<<"LinkedList of doubles : "<<"\n";
    dobj.Display();
    iRet = dobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    dobj.DeleteLast();
    cout<<"LinkedList of doubles : "<<"\n";
    dobj.Display();
    iRet = dobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    dobj.InsertAtPos(105.999,3);
    cout<<"LinkedList of doubles : "<<"\n";
    dobj.Display();
    iRet = dobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    dobj.DeleteAtPos(3);
    cout<<"LinkedList of doubles : "<<"\n";
    dobj.Display();
    iRet = dobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cout<<"_______________________________________________"<<"\n";
    cobj.InsertFirst('C');
    cobj.InsertFirst('B');
    cobj.InsertFirst('A');
    cout<<"LinkedList of character : "<<"\n";
    cobj.Display();
    iRet = cobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cobj.InsertLast('D');
    cobj.InsertLast('E');
    cout<<"LinkedList of character  : "<<"\n";
    cobj.Display();
    iRet = cobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cobj.DeleteFirst();
    cout<<"LinkedList of character  : "<<"\n";
    cobj.Display();
    iRet = cobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cobj.DeleteLast();
    cout<<"LinkedList of character  : "<<"\n";
    cobj.Display();
    iRet = cobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cobj.InsertAtPos('Z',3);
    cout<<"LinkedList of character : "<<"\n";
    cobj.Display();
    iRet = cobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    cobj.DeleteAtPos(3);
    cout<<"LinkedList of character : "<<"\n";
    cobj.Display();
    iRet = cobj.CountNode();
    cout<<"Number of elements in the linked list are:"<<iRet<<"\n";

    return 0;
}


    

