#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);

        iNo = iNo / 10;
        printf("%d\n", iNo);
    }
}


int main()
{
    int Value = 0;

    printf("Enter the value :");
    scanf("%d", &Value);

    Display(Value);

    return 0;
}