# include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
           
           iSum1 = iSum1 + iCnt ;
        }
        else
        {
            iSum2 = iSum2 + iCnt ;
        }
    }
    return (iDiff = iSum1 - iSum2);
}


int main()
{
    int iValue = 0;
    int iRet = 0 ;

    
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference Of Factors 7 Non Factors Is : %d" ,iRet);

    return 0;
}