#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void DisplayN(char FName[], int iSize)
{
    int fd = 0;
    int iRet = 0;
    char buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);  
    if (fd == -1)
    {
        printf("Unable to open file: %s\n", FName);
        return;
    }

    if (iSize > BUFFER_SIZE)
    {
        iSize = BUFFER_SIZE;   
    }

    iRet = read(fd, buffer, iSize); 

    if (iRet == -1)
    {
        printf("Unable to read the file.\n");
        close(fd);
        return;
    }

    
    write(1, buffer, iRet); 

    close(fd); 
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name:\n");
    scanf("%s", FileName);

    printf("Enter the number of characters:\n");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}
