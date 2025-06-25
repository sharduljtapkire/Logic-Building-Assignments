#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fnmae[20] = {'\0'};
    int fd = 0;
    int iRet = 0;
    char Buffer[50] = {'\0'};
    off_t fileSize = 0; 

    printf("Enter The Name That You Want To Open : \n");
    scanf("%s",Fnmae);

    fd = open(Fnmae , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable TO Open The File\n");
    }
    else
    {
        printf("File Is Successfully Opened With FD : %d\n",fd);
        
        
        fileSize = lseek(fd, 0, SEEK_END);
        printf("Size of the file is: %ld bytes\n", (long)fileSize);

        lseek(fd, 0, SEEK_SET);

        close(fd); 
    }

    return 0;
}