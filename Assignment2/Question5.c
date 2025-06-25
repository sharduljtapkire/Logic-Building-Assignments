// ACCEPT NUMBER FROM USER AND CHECK WHETHER NUMBER IS EVEN OR ODD.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOl ;

BOOl ChkEven(int iNo)
{
    if (iNo % 2 == 0)
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
    int iValue = 0 ;
    BOOl bRet = FALSE ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0 ;
}