#include <stdio.h>

int Sum(int iNo) 
{
    if (iNo == 0) 
    {
        return 0;
    } 
    else 
    {
        return (iNo % 10) + Sum(iNo / 10);
    }
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("Sum of digits is: %d\n", iRet);

    return 0;
}