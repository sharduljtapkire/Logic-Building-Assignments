# include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt != 0))
        {
           
           iSum = iSum + iCnt ;
        }
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0 ;

    
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Sumation Of Non Factors Is : %d" ,iRet);

    return 0;
}