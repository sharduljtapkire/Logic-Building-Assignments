#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("Char\tDec\tHex\tOct\n");
    printf("----\t----\t----\t----\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
       
        if (iCnt >= 32 && iCnt <= 126)
        {
            printf(" %c\t%3d\t%02X\t%03o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf(" N/A\t%3d\t%02X\t%03o\n", iCnt, iCnt, iCnt); 
    
        }
    }

}

int main()
{
    DisplayASCII();
    return 0;
}
