# include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    for(i = 1; i<=iRow ; i++)
    {    int j = 0;
        for(j = 0 ; j < iCol ; j++)
        {
            if((i % 2)== 1)
            {
                printf("%c\t" , 'a' + j);   
            }
            else
            {
                printf("%d\t",(j + 1));
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
