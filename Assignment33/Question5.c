#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    UINT iResult = 0;
    int i = 0;

    for (i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT uValue = 0;
    int iStartPos = 0, iEndPos = 0;
    UINT uModifiedNo = 0;

    printf("Enter a number: ");
    scanf("%u", &uValue);

    printf("Enter the starting position: ");
    scanf("%d", &iStartPos);

    printf("Enter the ending position: ");
    scanf("%d", &iEndPos);

    uModifiedNo = ToggleBitRange(uValue, iStartPos, iEndPos);

    printf("Modified number: %u\n", uModifiedNo);

    return 0;
}