#include <stdio.h>

void Reverse(char *str)
{
    int length = 0;
    char *ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}
