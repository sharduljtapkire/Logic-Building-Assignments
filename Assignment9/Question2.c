#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool ChkZero(int iNo) {
    if (iNo == 0) {
        return TRUE;
    }

    if (iNo < 0) {
        iNo = -iNo;
    }

    while (iNo != 0) {
        if (iNo % 10 == 0) {
            return TRUE;
        }
        iNo /= 10;
    }

    return FALSE;
}

int main() {
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE) {
        printf("It Contains Zero\n");
    } else {
        printf("There Is No Zero\n");
    }
    return 0;
}