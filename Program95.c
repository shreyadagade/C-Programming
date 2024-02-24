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
            //break;
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
    for(int i = 1; i < iNo; i++)
    {
        if(bRet == true)
        {
            printf("%d", i);
        }
    
    }
    return 0;
}