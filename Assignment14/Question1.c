//Nested Iteration
/*
input 4 4
output 1   2    3   4
       1    2   3   4
       1    2   3   4
       1    2   3   4
       
*/
# include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int iNum = 1;
    for(i = 0 ; i < iRow ; i++)
    {    int j = 0;
        for(j = 0 ; j < iCol ; j++)
        {
            printf("%d\t",iNum++); 
        }
    printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of Coloumns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;    
}