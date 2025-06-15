// ACCEPT ONE NUMBER FROM USER AND PRINT THAT NUMBER OF * ON SCREEN

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1 ;
    while (iCnt <= iNo)
    {
        printf(" * ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter The Number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}