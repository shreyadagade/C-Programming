#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("\nEven Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] % 2 == 0)
       {
        printf("%d\t", Arr[iCnt]);
       }
    }
    printf("\n");
}
int main()
{
    int Count = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the numbers of elements that you want :");
    scanf("%d", &Count);

    ptr = (int*) malloc(Count * sizeof(int));

    printf("Enter the elements :");

    for(iCnt = 0; iCnt < Count; iCnt++)
    {
        scanf("%d\t", &ptr[iCnt]);
    }

    EvenDisplay(ptr,Count);

    free(ptr);

    return 0;

}