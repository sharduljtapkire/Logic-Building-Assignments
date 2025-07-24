#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 6)
    {
        printf("%c\t", 'a' + i - 1);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}