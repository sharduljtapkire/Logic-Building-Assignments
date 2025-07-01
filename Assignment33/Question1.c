#include <stdio.h>

int CountOne(unsigned int iNo) 
{
    
    int iCount = 0;
    
    
    while (iNo != 0) {
        
        if ((iNo & 1) == 1) 
        {
            iCount++; 
        }
        
        
        iNo = iNo >> 1;
    }
    
    return iCount;
}

int main() {
    unsigned int uValue = 0;
    int iRet = 0;
    
    
    printf("Enter a number: ");
    scanf("%u", &uValue);
    
    
    iRet = CountOne(uValue);
    
    
    printf("Number of ON bits: %d\n", iRet);
    
    return 0;
}