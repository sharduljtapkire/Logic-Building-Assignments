#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    int i = 0;

    if (*src == '\0')
    {
        printf("Source string is empty. Copy operation aborted.\n");
        *dest = '\0';
        return;
    }
    while (*src != '\0' && iCnt > 0)
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
        i++;
    }
    *dest = '\0';  
}

int main()
{
    char arr[30];
    char brr[30];
    int n;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    StrNCpyX(arr, brr, n);

    printf("Copied string: %s\n", brr);

    return 0;
}
