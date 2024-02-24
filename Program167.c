#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int Frequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] ==  21)
        {
            Frequency++;
        }
    }
    return Frequency;
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

    iRet = Frequency(ptr, iCount);

    printf("Frequency of element is : %d", iRet);

    free(ptr);

    return 0;
}