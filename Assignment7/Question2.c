#include <stdio.h>

int DollarToInr(int iNo)
{
    int iInr = 0;
    int exchangeRate = 70;  // Update with latest rate if needed

    iInr = iNo * exchangeRate;

    printf("Equivalent amount in INR: %d\n", iInr);
}

int main()
{
    int  iValue = 0;

    printf("Enter amount in USD: ");
    scanf("%d", &iValue);

    DollarToInr(iValue);  
    return 0;
}
