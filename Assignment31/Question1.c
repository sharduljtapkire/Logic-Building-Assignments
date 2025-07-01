#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040; 
    if ((iNo & iMask) == iMask)
    {
        return iNo ^ iMask; 
    }
    else
    {
        return iNo; 
    }
}

int main()
{
    UINT iValue = 0;
    printf("Enter number: ");
    scanf("%u", &iValue);

    UINT iRet = OffBit(iValue);
    printf("Output: %u\n", iRet); // Input: 79, Output: 15 
    return 0;
}
