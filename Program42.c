#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum; 
}

int main()
{
    int iCount = 0; 
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want to enter :\n");
    scanf("%d", &iCount);

    ptr = (int *) malloc(iCount * sizeof(int));

    printf("Enter the values :\n");
    for(iCnt = 0; iCnt < iCount;iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Addition(ptr , iCount);

    printf("Addition of elements are :%d", iRet);

    free(ptr);

    return 0;
}