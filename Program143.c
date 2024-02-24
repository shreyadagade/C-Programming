#include<stdio.h>

void Display(int iNo)
{
    int idigit = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;
        printf("%d\n", idigit);

        iNo = iNo / 10;

    }
}

int main()
{
    int No = 0;

    printf("Enter the value :");
    scanf("%d", &No);

    Display(No);

    return 0;
}