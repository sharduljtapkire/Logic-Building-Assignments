typedef unsigned int UINT;
#include<stdio.h>

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040; 
    return iNo ^ iMask; 
}


int main()
{
    UINT iValue = 0;
    printf("Enter number: ");
    scanf("%u", &iValue);

    UINT iRet = ToggleBit(iValue);
    printf("Output: %u\n", iRet); // Input: 137, Output: 201 
    return 0;
}
