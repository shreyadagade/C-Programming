#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
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

    iRet = OddAddition(ptr , iCount);

    printf("Addition of Odd elements are :%d", iRet);

    free(ptr);

    return 0;
}