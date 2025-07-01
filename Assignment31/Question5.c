typedef unsigned int UINT;
#include<stdio.h>

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000F; 
    return iNo | iMask; 
}

int main()
{
    UINT iValue = 0;
    printf("Enter number: ");
    scanf("%u", &iValue);

    UINT iRet = OnBit(iValue);
    printf("Output: %u\n", iRet); // Input: 73, Output: 79
    return 0;
}
