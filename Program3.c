// Problem Statement : Accept radius from user and calculate the area of circle

#include<stdio.h>

//#define PI 3.14                             // instead of const PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f; 
    auto const float PI = 3.14f;

    fAns =  PI * fValue * fValue;
    return fAns;
}

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius :\n");
    scanf("%f", &fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of Circle : %f\n", fArea);

    return 0;
}