#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iStart = 0, iEnd = 0;

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

    printf("Enter the start of range : \n");
    scanf("%d", &iStart);

    printf("Enter the end of range : \n");
    scanf("%d", &iEnd);

    printf("Elements in the range [%d, %d] are:\n", iStart, iEnd);
    Range(ptr, iLength, iStart, iEnd);

    free(ptr);

    return 0;
}
