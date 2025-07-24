# include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return iMax;
    }

    iDigit = iNo % 10;

    if(iDigit > iMax)
    {
        iMax = iDigit;
    }

    Max(iNo / 10);

    return iMax;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Largest Digit Is : %d\n",iRet);

    return 0;
}