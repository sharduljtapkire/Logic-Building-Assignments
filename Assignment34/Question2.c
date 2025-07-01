#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int SearchLastOcc(PNODE Head, int no)
{
    int iPos = 1;
    int iLastPos = -1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            iLastPos = iPos;
        }
        iPos++;
        Head = Head->Next;
    }
    return iLastPos;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int iRet = SearchLastOcc(First, 30);
    if (iRet != -1)
    {
        printf("Last occurrence of element is at position: %d\n", iRet);
    }
    else
    {
        printf("Element not found in the list.\n");
    }

    return 0;
}
