#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNum)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNum)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
    int *ptr= NULL;
    int iNum = 0;

    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated succesfully...\n");

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to calculate :\n");
    scanf("%d",&iNum);

    iRet = Frequency(ptr,iCount, iNum);
    printf("%d occurs %d times\n",iNum,iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");
    return 0;
}