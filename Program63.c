// Pattren Printing

/*      * * * *  
        *     * 
        *     *
        * * * *    
*/



#include<stdio.h>

void Display(int iNo)
{
    int i = 0, j = 0;

    for(i = 1; i <= iNo; i++)
    {
        for(j = 1; j <= iNo; j++)
        {
            if((i == 1) || (i == iNo) || (j == 1) || (j == iNo))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
       printf("\n\n"); 
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