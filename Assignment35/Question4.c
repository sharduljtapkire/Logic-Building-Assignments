#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node {
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no) {
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;

    if (*Head == NULL) {
        *Head = newn;
    } else {
        newn->Next = *Head;
        *Head = newn;
    }
}

int SecMaximum(PNODE Head) {
    int Max = 0, SecMax = 0;

    if (Head == NULL || Head->Next == NULL) {
        return -1; // Not enough elements
    }

    Max = SecMax = Head->Data;
    Head = Head->Next;

    while (Head != NULL) {
        if (Head->Data > Max) {
            SecMax = Max;
            Max = Head->Data;
        } else if (Head->Data > SecMax && Head->Data != Max) {
            SecMax = Head->Data;
        }
        Head = Head->Next;
    }

    return SecMax;
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int result = SecMaximum(First);
    printf("Second maximum element is: %d\n", result);

    return 0;
}
