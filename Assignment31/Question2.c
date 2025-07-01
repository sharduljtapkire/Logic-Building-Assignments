typedef unsigned int UINT;
#include<stdio.h>

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000240; 
    return iNo & (~iMask); 
}

int main()
{
    UINT iValue = 0;
    printf("Enter number: ");
    scanf("%u", &iValue);

    UINT iRet = OffBit(iValue);
    
    printf("Output: %u\n", iRet); 

    return 0;
}
