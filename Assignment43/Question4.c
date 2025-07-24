# include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo == 0)
    {
        return iMin;
    }

    iDigit = iNo % 10;

    if(iDigit < iMin)
    {
        iMin = iDigit;
    }

    Min(iNo / 10);

    return iMin;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Smallest Digit Is : %d\n",iRet);

    return 0;
}