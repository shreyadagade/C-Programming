#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int Count = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements that you want ");
    scanf("%d", &Count);

    ptr = (int*) malloc(Count * sizeof(int));

    printf("Enter the elements :");

    for(iCnt = 0; iCnt < Count; iCnt++)
    {
        scanf("%d\t", &ptr[iCnt]);
    }

    Display(ptr, Count);

    return 0;
}