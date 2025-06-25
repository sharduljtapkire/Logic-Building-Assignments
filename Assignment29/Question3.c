#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


#define BUFFER_SIZE 1024

int CountSpace(char FName[])
{
    int fd = 0, iRet = 0 , iCnt = 0, iSpaceCount = 0;
    char Buffer[BUFFER_SIZE]= {'\0'};

    fd = open(FName, O_RDONLY);       
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);

        while((iRet = read(fd, Buffer , sizeof(Buffer)))  != 0)
        {
            for (iCnt = 0 ; iCnt < iRet ; iCnt++)
            {
                if(Buffer[iCnt] == ' ')
                {
                    iSpaceCount++;
                }
            }
            memset(Buffer, '\0', BUFFER_SIZE);
            

        }

    }
    return iSpaceCount;
}
int main()
{
    char Fname[30];
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    iRet = CountSpace(Fname);

    printf("Number of Space are %d ", iRet);

    return 0;

}