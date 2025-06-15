#include <stdio.h>

int KMToMeter(int iNo)
{
    int iMeter = 1000;
    iMeter = iNo * iMeter ;
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in Kilometers: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);  

    printf("Distance in Meters: %d\n", iRet);

    return 0;
}
