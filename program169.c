#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct node
{
    int data;           //4 bytes
    struct node *next;  //8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No) 
{
    //step 1 : Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    //step 2 : initialize the node 
    newn->data = No;
    newn->next = NULL;

    //step 3 : check whether LL is empty or not
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 51); // InsertFirst(60,51);
    InsertFirst(&First, 21); // InsertFirst(60,21);
    InsertFirst(&First, 11); 

    return 0;
}