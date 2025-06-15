#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",(iNo * iCnt));
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0 ;
}