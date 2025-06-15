#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0 , iSumOdd = 0 ;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd ;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
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

    // Step 2 : Use that memory
    iRet = Difference(ptr,iLength);
    
    printf("Summation of even elements is : %d\n",iRet);

    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}