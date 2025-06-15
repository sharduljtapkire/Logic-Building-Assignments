/*ACCEPT ONE CHARACTER FROM USER AND CONVERT CASE OF THAT CHARACTER */

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c\n", (CValue -32));
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c\n",(CValue + 32 ));
    }
    else
    {
        printf("Inavalid Character Input");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter THe Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0 ;
}