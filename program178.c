#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   //LL IS EMPTY.
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,int No)
{
    //Temporary pointr for LL traversal
    PNODE Temp = *Head;

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   //LL IS EMPTY
    {
        *Head = newn;
    }
    else
    {
        //TRAVEL THE LL TILL LAST NODE
        while(Temp->next != NULL)
        {
            Temp = Temp -> next;
        }
        //Add the address of new code at the end of last node
        Temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL);
    {
        printf("| %d |->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)   //CASE 1
    {
        return;
    }
    else if((*Head -> next == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free(Temp);
    }   
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)   
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE Head,int No,int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == Size + 1)
    {
        InsertLast(Head,No);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp ->next;
        temp->next = newn;
    }

}

void DeleteAtPos(PPNODE Head,int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targetednode = NULL;
    int i = 0;

    //CASE 1 : INVALID POSITION
    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid Position\n");
        return;
    }

    //CASE 2 : FIRST POSITION
    if(iPos == 1)
    {
        DeleteFirst(Head);
    } 

    //CASE 3 : LAST POSITION
    else if(iPos == Size)
    {
        DeleteLast(Head);
    } 

    //CASE 4 : POSITION IS IN BETWEEN FIRST AND LAST.
    else
    {
        for(i = 1;i<iPos;i++)
        {
            temp = temp->next;
        }
        targetednode = temp->next;

        temp->next = temp->next->next;
        free(targetednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertLast(&First,121);

    InsertAtPos(&First,105,5);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&First,5);
    Display(First);
    iRet = Count(First);
    printf("Number Of Nodes Are : %d\n",iRet);

    return 0;

}