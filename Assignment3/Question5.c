/*AACEPT ONE CHARACTER FROM USER AND 
CHECK WHETHER THAT CHARACTER IS VOWEL (A,E,I,O,U) OR NOT*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char ch)
{
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || 
    (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The Character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c Is A Vowel ",cValue);
    }
    else
    {
        printf("%c Is Not A Vowel",cValue);

    }

    return 0;


}