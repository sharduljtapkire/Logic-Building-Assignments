#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount11 = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount11++;
        }
    }
    return iCount11;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iLength);
    
    printf("The frequency of 11 in the array is: %d\n",iRet);

    free(ptr);

    return 0;
}