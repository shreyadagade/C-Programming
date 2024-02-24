#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount; 
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

    iRet = CountEven(ptr , iCount);

    printf("Count of even elements are :%d", iRet);

    free(ptr);

    return 0;
}