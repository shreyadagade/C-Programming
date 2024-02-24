#include<stdio.h>
#include<stdbool.h>

bool Checktriangle(int iSide1, int iSide2, int iSide3)
{
    if(((iSide1 + iSide2) > iSide3) && ((iSide2 + iSide3) > iSide1) && ((iSide1 + iSide3) > iSide2))
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    bool bRet = false;

    printf("Enter the first side:\n");
    scanf("%d", &iValue1);

    printf("Enter the second side:\n");
    scanf("%d", &iValue2);

    printf("Enter the third side:\n");
    scanf("%d", &iValue3);

    bRet = Checktriangle(iValue1, iValue2, iValue3);

    if(bRet == true)
    {
        printf("This is valid traingle");
    }
    else
    {
        printf("Its not valid traingle");
    } 
        return 0;
}