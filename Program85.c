#include<stdio.h>

int main()
{
    int i = 1; 
    int iSum = 0;
    int iNo = 0;

    printf("Enter the number:");
    scanf("%d", &iNo);

    for(;i <= iNo; i++)
    {
        iSum = iSum + i;
    }
    printf("%d", iSum);

    return 0;
}