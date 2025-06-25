#include <stdio.h>

void Display(char ch)
{
    printf("\nCharacter: %c\n", ch);
    printf("Decimal\t\t: %d\n", ch);
    printf("Octal\t\t: %04o\n", ch);
    printf("Hexadecimal\t: 0X%02X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
