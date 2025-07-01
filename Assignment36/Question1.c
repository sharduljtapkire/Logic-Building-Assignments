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


void DisplayList(PNODE Head)
{
    printf("Linked List: ");
    while (Head != NULL)
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}


void Reverse(PNODE Head)
{
    while (Head != NULL)
    {
        int num = Head->Data;
        int rev = 0;
        while (num != 0)
        {
            rev = rev * 10 + (num % 10);
            num = num / 10;
        }
        Head->Data = rev;
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayList(First);

  
    Reverse(First);
    printf("After reversing each element:\n");
    DisplayList(First);

    return 0;
}
