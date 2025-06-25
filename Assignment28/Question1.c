#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter The Name Of File That You Want To Open : \n");
    scanf("%s",fname);

    fd = open(fname , O_RDWR);

    if(fd == -1)
    {
        printf("Unable To Open The File");
        return -1;
    }
    else
    {
        printf("File Is Opened Successfully With FD %d\n",fd);
    }
    
    return 0;
}