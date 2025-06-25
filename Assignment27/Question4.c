#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if (*src == '\0')
    {
        printf("Source string is empty. Copy operation aborted.\n");
        *dest = '\0';
        return;
    }

    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')  
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
    scanf(" %[^\n]", arr);

    StrCpySmall(arr, brr);

    printf("Copied capital letters: %s\n", brr);

    return 0;
}
