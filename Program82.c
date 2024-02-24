/*
          *
        * * *
      *  *  *  *
*/

#include<stdio.h>

void Display(int iNo)
{
    int i =0, j = 0; 

    for(i = 0; i < iNo; i++)   
    {   
        int k = 0;
        for(j = 0; (j < (2* iNo) - 1); j++)   
        {
            if(j < iNo - (i - 1))
            {
                printf(" ");
            }
            else if( k < (2 *i) + 1)
            {
                printf("*");
                k++;
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
    int iRow = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iRow);

    Display(iRow);

    return 0;
}