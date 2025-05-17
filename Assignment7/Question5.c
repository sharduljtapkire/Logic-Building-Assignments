#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iOddFact = 1 , iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1;iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between Even and Odd factorial is: %d\n", iRet);

    return 0;
}
