#include<stdio.h>

typedef int bool;

#define true 1
#define false 0

bool Prime(int iValue)
{
    int i = 0;
    bool bflag = true;

    for(i = 2; i < iValue; i++)
    {
        if(iValue % i == 0)
        {
            bflag = false;
            break;
        }
        
    }
    return bflag;

}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the value :");
    scanf("%d", &iNo);

    bRet = Prime(iNo);
    if(bRet == true)
    {
        printf("%d It is prime number", iNo);
    }
    else
    {
        printf(" %d It is not a prime number", iNo);
    }

    return 0;
}