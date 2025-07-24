# include<stdio.h>

int Small(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    if(*str >= 'a' && *str <= 'z')
    {
        return 1 + Small(str + 1);
    }
    
    return Small(str + 1);
}

int main()
{
    char str[100];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    iRet = Small(str);
    
    printf("Number of Small Characters in the string: %d\n", iRet);

    return 0;
}