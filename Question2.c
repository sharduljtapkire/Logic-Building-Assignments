#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter The Name Of File : \n");
    scanf("%s",fname);

    fd = creat(fname , 0777);

    if(fd == -1)
    {
        printf("Unable To Create The File");
        return -1;
    }
    else
    {
        printf("File Is Created Successfully With FD %d\n",fd);
    }
    
    return 0;
}