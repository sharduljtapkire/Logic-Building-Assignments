// ACCEPT ONE NUMBER FROM USER AND PRINT THAT NUMBER OF * ON SCREEN 

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*");

    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;
}