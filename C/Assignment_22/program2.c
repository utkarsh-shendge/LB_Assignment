//Accept Character from user and check whether it is capital or not(A-Z)
//Input :   F
//Output :  TRUE
//Input :   c
//Output :  FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is a capital alphabet\n");
    }
    else
    {
        printf("It is not a capital alphabet\n");
    }

    return 0;
}