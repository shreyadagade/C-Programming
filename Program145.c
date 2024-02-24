#include<stdio.h>

int  Display(int iNo)
{
    int iDigit = 0;
    int Count = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        Count++;
        
    }
    return Count;
}


int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the value :");
    scanf("%d", &Value);

    iRet = Display(Value);
    printf("Number of digits are : %d", iRet);

    return 0;
}