/*WRITE A PROGRAM WHICH ACCEPTS NUMBER FROM USER AND PRINT EVEN FACTORS OF THAT NUMBER */

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}