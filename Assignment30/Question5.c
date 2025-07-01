#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001; 
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
        printf("First and last bits are both ON.\n");
    }
    else
    {
        printf("At least one of the first or last bits is OFF.\n");
    }
    return 0;
}
