#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        return FALSE;
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    if (iResult == iMask)
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
    int iPosition = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%u", &uValue);

    printf("Enter position: \n");
    scanf("%d", &iPosition);

    bRet = ChkBit(uValue, iPosition);

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