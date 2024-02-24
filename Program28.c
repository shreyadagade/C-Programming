#include<stdio.h>

int SumOfDigits(int iNo)
{
    int iDigit = 0;
    int iSum =0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue),

    iRet = SumOfDigits(iValue);

    printf("Sum of Digits is : %d\n", iRet);

    return 0;
}