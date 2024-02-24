#include<stdio.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAverage = 0.0f;

    fAverage = ((float)(iNo1 + iNo2 + iNo3) / 3);
    return fAverage;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    float fRet = 0.0f;

    printf("Enter the first Value \n");
    scanf("%d", &iValue1);

    printf("Enter the second Value \n");
    scanf("%d", &iValue2);

    printf("Enter the third Value \n");
    scanf("%d", &iValue3);

    fRet = Average(iValue1, iValue2, iValue3);

    printf("Average is :%f", fRet);

    return 0;   
}

    
