# include <stdio.h>

void Display(int iNo)
{
    static int i = 1;
    if (i <= iNo)
    {
        printf("%c\t",'A' + (i - 1));
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}