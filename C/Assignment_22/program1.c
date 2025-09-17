//Accept Character from user and check whether it is alphabet or not(A-Z a-z)
//Input :   F
//Output :  TRUE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlphabet(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = CheckAlphabet(cValue);

    if(bRet == TRUE)
    {
        printf("It is a character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}