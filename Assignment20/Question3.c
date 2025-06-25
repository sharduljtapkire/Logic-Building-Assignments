#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
        }
    }
    return iIndex;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iValue = 0;
    int iRet = -1;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter the number to check for its last occurrence : \n");
    scanf("%d", &iValue);

    iRet = LastOcc(ptr, iLength, iValue);
    
    if (iRet == -1)
    {
        printf("The number %d is not present in the array.\n", iValue);
    }
    else
    {
        printf("The last occurrence of %d is at index %d\n", iValue, iRet);
    }

    free(ptr);

    return 0;
}