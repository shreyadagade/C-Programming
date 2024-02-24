// Calculate Percentage 

#include<stdio.h>

float CalculatePercentage(int iMarks, int iTotalMarks)
{
    auto float fPercentage = 0.0f;

    if((iMarks < 0) || (iTotal < 0))        // Filter
    {
        printf("Invalid input\n");
        return fPercentage;           
    }

    if(iMarks > iTotalMarks)                   // Filter
    {
        printf("Invalid Input");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotalMarks) * 100);

    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fAns = 0.0f;

    printf("Enter your Marks :\n");
    scanf("%d", &iValue1);

    printf("Enter your Total Marks :\n");
    scanf("%d", &iValue2);

    fAns = CalculatePercentage(iValue1 , iValue2);

    printf("Percentage is :%f\n", fAns);

    return 0;
}