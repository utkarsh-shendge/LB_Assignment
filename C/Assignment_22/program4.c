//Accept Character from user and check whether it is small case alphabet(a-z)
//Input :   a
//Output :  TRUE
//Input :   C
//Output :  FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a small case alphabet\n");
    }
    else
    {
        printf("It is not a small case alphabet\n");
    }

    return 0;
}