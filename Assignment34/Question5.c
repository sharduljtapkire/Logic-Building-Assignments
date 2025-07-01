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

int Minimum(PNODE Head)
{
    if (Head == NULL)
    {
        return -1;
    }

    int iMin = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
    }

    return iMin;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int iRet = Minimum(First);
    printf("Minimum element is: %d\n", iRet);

    return 0;
}
