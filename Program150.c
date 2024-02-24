#include<stdio.h>
#include<stdlib.h>

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

    printf("Display the elements of Array :");

    for(iCnt = 0; iCnt < Count; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");

    return 0;
}