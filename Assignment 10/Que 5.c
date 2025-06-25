#include <stdio.h>

int CountDiff(int iNo) 
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    while (iNo != 0) 
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0) 
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else 
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("The difference between the sum of even and odd digits is: %d\n", iRet);

    return 0;
}