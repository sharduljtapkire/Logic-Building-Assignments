#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    
    UINT iMask = 0xF000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}


int main()
{
    UINT uValue = 0;
    UINT uRet = 0;

    printf("Enter number: \n");
    scanf("%u", &uValue);

    uRet = ToggleBit(uValue);

    printf("Modified number is: %u\n", uRet);

    return 0;
}