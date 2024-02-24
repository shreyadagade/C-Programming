// Problem Statement : Accept 2 values from user and perform the addition.

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;

    iSum = iNo1 + iNo2;
    return iSum;
}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0;

    printf("Enter first value :");
    scanf("%d\n", &iValue1);

    printf("Enter second value :");
    scanf("%d\n", &iValue2);

    iAns = Addition(iValue1, iValue2);

    printf("Addition is : %d\n", iAns);
    
    return 0;

}