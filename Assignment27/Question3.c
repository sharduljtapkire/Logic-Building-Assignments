#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if (*src == '\0')
    {
        printf("Source string is empty. Copy operation aborted.\n");
        *dest = '\0';
        return;
    }

    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')  
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';  
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    StrCpyCap(arr, brr);

    printf("Copied capital letters: %s\n", brr);

    return 0;
}
