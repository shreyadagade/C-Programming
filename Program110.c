#include<stdio.h>

int Counta(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCnt++;    
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String :");
    scanf("%[^'\n]s", Arr);

    iRet = Counta(Arr);   //strlex(100)

    printf("number of small a of the string is :%d\n", iRet);

    return 0;
}