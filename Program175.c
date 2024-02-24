// Input :  4
// Output :  a  b  c  d

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch ='a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
