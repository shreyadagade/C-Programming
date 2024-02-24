/*
    iRow = 3
    iCol = 4

    1   2   3   4   
    1   2   3   4   
    1   2   3   4                     
*/

#include<stdio.h>

void Display(int Row, int Col)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Col; j++)
        {
            printf("%d\t", j);
        }
        printf("\n\n");
    }  
}

int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter the number of Row :");
    scanf("%d", &iRow);

    printf("Enter the number of Column :");
    scanf("%d", &iCol);

    Display(iRow, iCol);

    return 0;
}