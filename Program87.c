#include<stdio.h>

int main()
{
    int a =0,  b = 0,c = 0;

    printf("Enter the Value :\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest ",a);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
    else
    {
        if(b > c)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }

    return 0;
}