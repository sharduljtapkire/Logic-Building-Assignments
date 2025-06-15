#include <stdio.h>

void Pattern(int iNo) 
{
    int iCnt = 0;

    if (iNo < 0) 
    {
        iNo = -iNo; 
    }

    if (iNo > 26) 
    {
        printf("Error: Input too large. Can only print up to 26 letters.\n");
        return;
    }

    for (iCnt = 0 ; iCnt <= iNo; iCnt++) 
    {
        printf("%c\t", 'A' + iCnt);
    }
    printf("\n");
}

int main() 
{
    int iValue = 0;

    printf("Enter The Number :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}