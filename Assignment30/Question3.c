#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08104040;
    if ((iNo & iMask) == iMask)
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
    UINT num = 0;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (ChkBit(num))
    {
        printf("7th, 15th, 21st, and 28th bits are all ON.\n");
    }
    else
    {
        printf("At least one of the 7th, 15th, 21st, or 28th bits is OFF.\n");
    }
    return 0;
}
