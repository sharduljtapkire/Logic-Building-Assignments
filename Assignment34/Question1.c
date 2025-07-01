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

void InsertFirst(PPNODE Head , int no) {
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int SearchFirstOcc(PNODE Head, int no) {
    int pos = 1;
    while(Head != NULL) {
        if(Head->Data == no) {
            return pos;
        }
        Head = Head->Next;
        pos++;
    }
    return -1;
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    int result = SearchFirstOcc(First, 30);
    printf("%d\n", result);
    return 0;
}
