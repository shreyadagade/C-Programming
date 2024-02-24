#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    float Avg = 0.0f;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    Avg = ((float)iSum /(float)iSize);
    return Avg;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

    printf("Enter the number of Elements that you want :\n");
    scanf("%d", &iCount);

    ptr = (int*) malloc(iCount * sizeof(int));

    printf("\nEnter the elements :\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d\n", &ptr[iCnt]);
    }

    fRet = Average(ptr, iCount);

    printf("Average of elements : %f\n", fRet);

    free(ptr);

    return 0;
}