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

void SumDigit(PNODE Head) {
    while (Head != NULL) {
        int num = Head->Data;
        int iSum = 0;

        while (num != 0) {
            iSum = iSum + (num % 10);
            num = num / 10;
        }

        printf("%d ", iSum);
        Head = Head->Next;
    }
    printf("\n");
}

int main() {
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Sum of digits of each element:\n");
    SumDigit(First);

    return 0;
}
