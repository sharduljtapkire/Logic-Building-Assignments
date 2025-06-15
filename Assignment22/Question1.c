#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("%c Is Alphabet\n",cValue);
    }
    else
    {
        printf("%c Is Not Alphabet\n",cValue);
    }
    
    return 0;
}