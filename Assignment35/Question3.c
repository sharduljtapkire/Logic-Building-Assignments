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

int AdditionEven(PNODE Head) {
    int iSum = 0;
    while (Head != NULL) {
        if (Head->Data % 2 == 0) {
            iSum += Head->Data;
        }
        Head = Head->Next;
    }
    return iSum;
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    int result = AdditionEven(First);
    printf("Addition of even elements: %d\n", result);

    return 0;
}
