#include <stdio.h>

double FHToCS(float fTemp)
{
    float fCelsius = 1;
    fCelsius = ((fTemp - 32)*(5.0/9.0)) ;
    return fCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;;

    printf("Enter Temperature in Fahrenhiet : ");
    scanf("%f", &fValue);

    dRet = FHToCS(fValue);  

    printf("Temperature In Celsius Is : %lf",dRet);

    return 0;
}
