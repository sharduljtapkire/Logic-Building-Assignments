#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 2; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of %d is: %d\n", iValue, iRet);

    return 0;
}
