// ACCEPT A NUMBER FROM USER IF NUMBER IS LESS THAN 10 THEN PRINT HELLO OTHERWISE DEMO.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("HELLO");
    } 
    else
    {
        printf("DEMO");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
    
}