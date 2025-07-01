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

int IsPerfect(int no) {
    int iSum = 0;
    for (int i = 1; i <= no / 2; i++) {
        if (no % i == 0) {
            iSum += i;
        }
    }
    return (iSum == no);
}

int DisplayPerfect(PNODE Head) {
    while (Head != NULL) {
        if (IsPerfect(Head->Data)) {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
    printf("\n");
    return 0;
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    printf("Perfect numbers in the linked list are:\n");
    DisplayPerfect(First);

    return 0;
}
