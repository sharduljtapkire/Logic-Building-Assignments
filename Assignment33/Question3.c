#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 1 << 8;
    UINT iMask2 = 1 << 11;
    UINT iResult1 = iNo & iMask1;
    UINT iResult2 = iNo & iMask2;

    if (iResult1 == iMask1 || iResult2 == iMask2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT uValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%u", &uValue);

    bRet = ChkBit(uValue);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}