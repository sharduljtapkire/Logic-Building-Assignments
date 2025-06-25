#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))                  
        {
            if((*str == ch) || (*str == ch+32))
            {
                iCount++;
            }
        }
        else if((ch >= 'a') && (ch <= 'z'))             
        {
            if((*str == ch) || (*str == ch-32))
            {
                iCount++;
            }
        }
        else                                            
        {
            if(*str == ch)
            {
                iCount++;
            }
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("%c occurs %d times\n",cValue, iRet);

    return 0;
}