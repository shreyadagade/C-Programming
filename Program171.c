// 6
// 0 1 2 3 4 5 6

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

