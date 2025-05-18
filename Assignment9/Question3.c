#include <stdio.h>

int countTwo(int iNo) {
    int iDigit = 0;
    int iCnt = 0; 
    if (iNo < 0) {
        iNo = -iNo; 
    }

    while (iNo != 0) {
        iDigit = iNo % 10;  
        if (iDigit == 2) {
            iCnt++;   
        }
        iNo = iNo / 10;     
    }

    return iCnt;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = countTwo(iValue);
    printf("The frequency of 2 is: %d\n", iRet); 

    return 0;
}