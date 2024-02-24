#include<stdio.h>

void Display(int No)
{
    int n1 = 0;
    int n2 = 1;
    int result = 0;

    for(int i = 1; i <  No ; i++ )
    {
        result = n1 + n2;
        printf("%d\t", n1);
    
        n1 = n2;
        n2 = result;
    }
}
int main()
{
    int Count = 0;

    printf("Enter the number :");
    scanf("%d", &Count);

    Display(Count);

    return 0;
}