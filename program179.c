#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node *next;
    struct node *prev;      //#
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{

}

void InsertLast(PPNODE Head,int No)
{
    
}

void InsertAtPos(PPNODE Head,int No)
{

}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{

}

void DeleteAtPos(PPNODE Head,int iPos)
{

}

void Display(PNODE Head)
{

}

int count(PNODE Head)
{
    return 0;
}


int main()
{
    PNODE First = NULL;
    return 0;
}