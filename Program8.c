#include<stdio.h>

void DisplayClass(int fMarks)
{
    if((fMarks < 0.00) || (fMarks > 100.00))    // Filter
    {
        printf("Invalid Marks...\n");
    }
    
    if((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are fail..");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is pass..");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second class..");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First class..");
    }
    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is First with Distinction..");
    }
}

int main()
{
    auto float fValue = 0.0f;

    printf("Enter the Marks :\n");
    scanf("%f", &fValue);

    DisplayClass(fValue);

    return 0;
}