#include<stdio.h>

int main()
{
    int i = 0, j = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            if(j == 3)
            {
                continue;
                
            }

            printf("%d %d\n", i,j);
        }
    }
    return 0;
}