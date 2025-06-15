#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter the number to find its frequency : \n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iLength, iValue);
    
    printf("The frequency of %d in the array is: %d\n", iValue, iRet);

    free(ptr);

    return 0;
}