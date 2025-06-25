#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while (*src != '\0')  
    {
        src++;
    }

    while (*dest != '\0')  
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';  
}

int main()
{
    char arr[100];
    char brr[50];

    printf("Enter first string: ");
    scanf(" %[^\n]s", arr);  

    printf("Enter second string: ");
    scanf(" %[^\n]s", brr);  

    StrCatX(arr, brr);

    printf("Concatenated string: %s\n", arr);

    return 0;
}
