// Pattren Printing

/*      * * * *  
        * * * * 
        * * * *
        * * * *    
*/



#include<stdio.h>

void Display(int iNo)
{
    int i = 0, j = 0;

    for(i = 1; i <= iNo ; i++)
    {
        for(j = 1; j <= iNo; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}