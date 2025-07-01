#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0; 
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
        printf("7th, 8th, and 9th bits are all ON.\n");
    }
    else
    {
        printf("At least one of the 7th, 8th, or 9th bits is OFF.\n");
    }
    return 0;
}
