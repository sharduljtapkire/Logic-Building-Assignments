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
    
    printf("Enter The Name That You Want To Open : \n");
    scanf("%s",Fnmae);
    
    fd = open(Fnmae , O_RDONLY);

    if(fd == -1)
    {
        printf("Unable TO Open The File\n");
    }
    else
    {
        printf("File Is Successfully Created With FD : %d\n",fd);
        
        iRet = read(fd , Buffer , 20);

        printf("%d Bytes Gets Read Successfully\n",iRet);

        printf("Data From File Is : %s\n",Buffer);
    }

    return 0;
}