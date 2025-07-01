#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        return iNo; 
    }

    iMask = iMask << (iPos - 1);
    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT uValue = 0;
    int iPosition = 0;
    UINT uRet = 0;

    printf("Enter number: \n");
    scanf("%u", &uValue);

    printf("Enter position: \n");
    scanf("%d", &iPosition);

    uRet = OnBit(uValue, iPosition);

    printf("Modified number is: %u\n", uRet);

    return 0;
}