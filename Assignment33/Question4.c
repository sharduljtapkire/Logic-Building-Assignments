#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);
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
    int iPosition1 = 0, iPosition2 = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%u", &uValue);

    printf("Enter the first position: ");
    scanf("%d", &iPosition1);

    printf("Enter the second position: ");
    scanf("%d", &iPosition2);

    bRet = ChkBit(uValue, iPosition1, iPosition2);

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