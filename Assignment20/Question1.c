#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPresence(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iValue = 0;
    bool bIsPresent = false;

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

    printf("Enter the number to check for its presence : \n");
    scanf("%d", &iValue);

    bIsPresent = CheckPresence(ptr, iLength, iValue);
    
    if (bIsPresent)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    free(ptr);

    return 0;
}
