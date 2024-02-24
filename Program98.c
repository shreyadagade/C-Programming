#include<stdio.h>
#include<stdbool.h>

bool checkCapital(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the charachter :");
    scanf("%c", &ch);

    bRet = checkCapital(ch);
    
    if(bRet == true)
    {
        printf("It is capital letter");
    }
    else
    {
        printf("It is not capital letter");
    }

    return 0;
}