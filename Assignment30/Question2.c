#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010; /
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
        printf("5th and 18th bits are both ON.\n");
    }
    else
    {
        printf("At least one of the 5th or 18th bits is OFF.\n");
    }
    return 0;
}