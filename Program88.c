#include<stdio.h>

int Sum(int iValue)
{
    int i = 0;
    int iSum = 0;

    for(i =1 ; i <= iValue; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
    
}

int main()
{
    int iRet = 0;
    int iNo = 0;

    printf("Enter the number :");
    scanf("%d", &iNo);

    iRet = Sum(iNo);
    printf("Summation of value is :%d", iRet);

    return 0;
}