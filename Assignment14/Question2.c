# include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int iNum = 1;
    for(i = 0 ; i < iRow ; i++)
    {   
        if (i % 2 == 0) 
        {
            iNum = 2; 
        } 
        else 
        {
            iNum = 1; 
        }
        {
            int j = 0;
            for(j = 0 ; j < iCol ; j++)
            {
                printf("%d\t",iNum);
                iNum = iNum + 2 ; 
            }    
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
