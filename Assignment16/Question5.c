#include <stdio.h> 

void Pattern(int iRow, int iCol) 
{ 
    
    if (iRow != iCol) 
    { 
        printf("Invalid input.\n"); 
        return; 
    } 

    for (int i = 1; i <= iRow; i++) 
    { 
        
        for (int k = 1; k < i; k++) 
        { 
            printf("\t"); 
        }

        
        for (int j = i; j <= iCol; j++) 
        { 
            printf("%d\t", j); 
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