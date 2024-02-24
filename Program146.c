#include<stdio.h>

int SumOfDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iSum = iSum + iDigit;                      // iSum = iSum + (iNum % 10);
    }
    return iSum;
}


int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the value :");
    scanf("%d", &Value);

    iRet = SumOfDigits(Value);
    printf("Sum of digits are : %d", iRet);

    return 0;
}