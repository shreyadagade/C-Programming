// Check number is Even or Odd

#include<stdio.h>

typedef int bool;             

#define true 1
#define false 0 

bool CheckEven(int iValue)
{
    if((iValue % 2) == 0)
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

    bRet = CheckEven(iNo);

    if(bRet == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    } 

    return 0;  
}