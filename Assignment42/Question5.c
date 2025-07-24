#include <stdio.h>

int Mult(int iNo) 
{
    if (iNo == 0) 
    {
        return 1;
    } 
    else 
    {
        return (iNo % 10) * Mult(iNo / 10);
    }
}

int main() 
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("Product of digits is: %d\n", iRet);

    return 0;
}