// Pattren Printing

/*      * * * *  
        *   *  
        * *   
        *      
*/



#include<stdio.h>

void Display(int iNo)
{
    int i = 0, j = 0;

    for(i = 1; i <= iNo; i++)
    {
        for(j = 1; j <= iNo; j++)
        {
            if(i == 1 || j == 1 || j == (iNo - (i - 1)) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
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