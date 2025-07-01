#include <stdio.h>

void CommonBits(unsigned int iNo1, unsigned int iNo2)
{
    unsigned int iResult = iNo1 & iNo2;
    int iPos = 1;

    if (iResult == 0)
    {
        printf("No common ON bits\n");
        return;
    }

    while (iResult != 0)
    {
        if ((iResult & 1) == 1)
        {
            printf("%d\n", iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
}

int main()
{
    unsigned int uValue1 = 0, uValue2 = 0;

    printf("Enter first number: ");
    scanf("%u", &uValue1);

    printf("Enter second number: ");
    scanf("%u", &uValue2);

    CommonBits(uValue1, uValue2);

    return 0;
}