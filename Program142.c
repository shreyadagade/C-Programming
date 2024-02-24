#include<stdio.h>

void Swap(int iNo1, int iNo2)
{
    //int temp = 0;

    printf("After Swapping\n :");

    iNo1 = iNo1 + iNo2;
    iNo2 = iNo1 - iNo2;
    iNo1 = iNo1 - iNo2;

    
    printf("iNo1 = %d\n", iNo1);
    printf("iNo2 = %d\n", iNo2);
}

int main()
{
    int No1 = 0;
    int No2= 0;

    printf("Enter the number :");
    scanf("%d", &No1);

    printf("Enter the number :");
    scanf("%d", &No2);

    printf("Before Swapping :\n");
    printf("No1 = %d\n", No1);
    printf("No2 = %d\n", No2);

    Swap(No1, No2);

    return 0;
}