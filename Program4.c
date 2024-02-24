// Find cube of the number 

#include<stdio.h>

long int CalculateCube(int iValue)
{
    if(iValue < 0)                        
    {
        iValue = -iValue;
    }

    long int iCube = 0;

    iCube = iValue * iValue * iValue;

    return iCube;
}

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter number :\n");
    scanf("%d", &iNo);

    iAns = CalculateCube(iNo);

    printf("Cube of the number is :%d\n", iAns);

    return 0;
}
