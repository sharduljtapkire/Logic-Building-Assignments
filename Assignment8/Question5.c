#include <stdio.h>

double SquareMeter(float fAreaSqft)
{
    double fSqm = 0.092903;
    fSqm = fAreaSqft * fSqm; 
    return fSqm;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet: ");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);  

    printf("Area in Square Meters is: %lf\n", dRet);

    return 0;
}
