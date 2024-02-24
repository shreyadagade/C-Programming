#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;    
    }
    return iRev;
}


int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the value :");
    scanf("%d", &Value);

    iRet = Reverse(Value);
    printf("Reverse digits are : %d", iRet);

    return 0;
}