# include<stdio.h>

int StrLen( char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + StrLen(str + 1);
    }
}

int main()
{
    char arr[100];
    int iLength = 0 , iRet = 0;

    printf("Enter a string: ");
    scanf("%s", arr);

    iLength = StrLen(arr);

    printf("Length of the string is: %d\n", iLength);

    return 0;
}