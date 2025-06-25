#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    if (*src == '\0')
    {
        printf("Source string is empty. Copy operation aborted.\n");
        *dest = '\0';
        return;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string :");
    scanf(" %[^\n]s", arr); 

    StrCpyX(arr, brr);

    printf("Copied string: %s\n", brr);

    return 0;
}