// Check number is Odd or Even

#include<stdio.h>

typedef int bool;             // instead of this we can do #import<stdbool.h> 

#define true 1
#define false 0 

bool CheckPositive(int iValue)
{
    if(iValue > 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    bRet = CheckPositive(iNo);

    if(bRet == true)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    } 

    return 0;  
}