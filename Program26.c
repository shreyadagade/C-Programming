#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("Digit is : %d\n", iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Value :\n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}