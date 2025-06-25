#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int CountChar(const char FName[], char Ch)
{
    int fd = 0, iRet = 0, iCnt = 0, iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if(Buffer[iCnt] == Ch)
            {
                iCount++;
            }
        }
    }

    close(fd);
    return iCount;
}

int main()
{
    char FileName[30];
    char cValue;
    int iRet = 0;

    printf("Enter file name:\n");
    scanf("%s", FileName);

    printf("Enter the character:\n");
    scanf(" %c", &cValue); 

    iRet = CountChar(FileName, cValue);

    if(iRet >= 0)
    {
        printf("Frequency of '%c' is %d\n", cValue, iRet);
    }

    return 0;
}
