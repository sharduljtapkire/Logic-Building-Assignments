#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt++;
    }
    return -1;
}

int main()
{
    char arr[30];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr); 

    printf("Enter the character: ");
    scanf(" %c", &cValue); 
    iRet = FirstChar(arr, cValue);

    printf("Character index: %d\n", iRet); 

    return 0;
}
