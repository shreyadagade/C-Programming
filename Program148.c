#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrom(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iCopy = iNo;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iRev = (iRev * 10) + iDigit;
    }

    if(iRev == iCopy)
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
    int Value = 0;
    bool bRet = false;

    printf("Enter the value :");
    scanf("%d", &Value);

    bRet = CheckPalindrom(Value);

    if(bRet == true)
    {
        printf("It is Palindrom");
    }
    else
    {
        printf("It is not Palindrom");
    }
    return 0;
}