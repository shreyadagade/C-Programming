#include<stdio.h>

int Fact(int iValue)
{
    int i = 0;
    int iFact = 1;

    for(i = 1 ; i <= iValue; i++)
    {
        iFact = iFact * i;
    }
    return iFact;    
}

int main()
{
    int iRet = 0;
    int iNo = 0;

    printf("Enter the number :");
    scanf("%d", &iNo);

    iRet = Fact(iNo);
    printf("Factorial of value is :%d", iRet);

    return 0;
}