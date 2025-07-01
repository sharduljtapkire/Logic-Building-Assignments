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

int Maximum(PNODE Head)
{
    if (Head == NULL)
    {
        return -1; 
    }

    int iMax = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }

    return iMax;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int iRet = Maximum(First);
    printf("Maximum element is: %d\n", iRet);

    return 0;
}
