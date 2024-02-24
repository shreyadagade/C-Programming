#include<stdio.h>

int Maximum(int iNum1, int iNum2)
{
    if(iNum1 > iNum2)
    {
        return iNum1;
    }
    else
    {
        return iNum2;
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second number :\n");
    scanf("%d", &iValue2);

    iRet = Maximum(iValue1, iValue2);

    printf("Maximum number is : %d\n", iRet);

    return 0;
}