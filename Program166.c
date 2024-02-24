#include<stdio.h>
#include<stdlib.h>

void MinMax(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("Minimum element is : %d\n", iMin);
    printf("Maximum element is : %d\n", iMax);
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want\n");
    scanf("%d\n", &iCount);

    ptr = (int*) malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    MinMax(ptr, iCount);

    free(ptr);

    return 0;
}