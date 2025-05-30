#include <stdio.h> 

void Pattern(int iRow, int iCol) 
{ 
    if (iRow != iCol) 
    { 
        printf("Invalid input\n"); 
        return; 
    } 

    for (int i = 1; i <= iRow; i++) 
    { 
        for (int j = 1; j <= iCol; j++) 
        { 
            if (i == 1 || i == iRow || j == 1 || j == iCol) 
            { 
                printf("*\t"); 
            } 
            else if (
                     (i == 2 && j >= 2 && j <= 4) || 
                     (i == 3 && j >= 2 && j <= 3) || 
                     (i == 4 && j == 2)              
                    )
            { 
                printf("#\t"); 
            } 
            else if (
                     (i == 3 && j == 5) ||           
                     (i == 4 && j >= 4 && j <= 5) || 
                     (i == 5 && j >= 3 && j <= 5)    
                    )
            { 
                printf("$\t"); 
            } 
            else 
            { 
                printf("*\t"); 
            } 
        } 
        printf("\n"); 
    } 
} 

int main() 
{ 
    int iValue1 = 0, iValue2 = 0; 

    printf("Enter number of rows: "); 
    scanf("%d", &iValue1); 

    printf("Enter number of columns: "); 
    scanf("%d", &iValue2); 

    Pattern(iValue1, iValue2); 

    return 0; 
}