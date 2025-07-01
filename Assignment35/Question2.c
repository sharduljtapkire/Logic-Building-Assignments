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

int IsPrime(int no) {
    if (no < 2) {
        return 0;
    }
    for (int i = 2; i <= no / 2; i++) {
        if (no % i == 0) {
            return 0;
        }
    }
    return 1;
}

int DisplayPrime(PNODE Head) {
    while (Head != NULL) {
        if (IsPrime(Head->Data)) {
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
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Prime numbers in the linked list are:\n");
    DisplayPrime(First);

    return 0;
}
