//Accept Character from user and check whether it is digit or not(0-9)
//Input :   0
//Output :  TRUE
//Input :   c
//Output :  FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }

    return 0;
}