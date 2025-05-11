// ACCEPT TWO NUMBERS FROM USER AND DISPLAY FIRST NUMBER IN SECOND NUMBER OF TIMES 

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0 ;

    iCnt = 1 ;
    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d \t",iNo);
    }

}

int main()
{
    int iValue = 0 ;
    int iCount = 0 ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    printf("Enter The Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}