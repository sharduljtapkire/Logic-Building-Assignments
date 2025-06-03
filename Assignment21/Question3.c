#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iMin = Arr[0];

    for (int i = 1; i < iLength; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        else if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMax - iMin;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Difference between largest and smallest number is: %d\n", iRet);

    free(p);

    return 0;
}
