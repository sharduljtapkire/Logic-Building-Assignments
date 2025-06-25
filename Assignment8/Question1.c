# include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14;
    float Area = 0.0;

    Area = (fPI * fRadius * fRadius);
    return Area;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0;

    printf("Enter The Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area Of Circle Is : %lf",dRet);
}