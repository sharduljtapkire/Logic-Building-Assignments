 //Input : 4
 //Output : 2   4   6   8   

# include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",(iCnt*2));
    }
    printf("\n");


}
int main()
{
    int iValue = 0;
    
    printf("Enter The Frequency :\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;    
}