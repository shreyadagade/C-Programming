#include<stdio.h>

int Swap(int iValue1, int iValue2)
{
    int iTemp = 0;

    printf("\nValue before Swaping :\n %d\n %d\n", iValue1, iValue2);

    iTemp = iValue1;
    iValue1 = iValue2;
    iValue2 = iTemp;

    printf("Value after Swaping :\n %d %d", iValue1, iValue2);
   
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter the three values :\n");
    scanf("%d\n %d\n ", &iNo1, &iNo2);

    Swap(iNo1,iNo2);

    return 0;
}