#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    printf("Odd Elements are :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    
    printf("Enter the number of elements that you want\n");
    scanf("%d\n", &iCount);

    ptr = (int*) malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DisplayOdd(ptr, iCount);

    free(ptr);

    return 0;
}