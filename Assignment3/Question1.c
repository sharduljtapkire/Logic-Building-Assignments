// WRITE A PROGRAM WHICH ACCEPT ONE NUMBER FROM USER AND 
//PRINT THAT NUMBER OF EVEN NUMBERS ON SCREEN

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1 ; iCnt<= iNo ; iCnt++)
    {
        printf("%d\t" ,(iCnt * 2));
    }

}
int main()
{
    int iValue = 0 ;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}