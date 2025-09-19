//Write a program which accept string from user and accept one character.Check whether that character is present in string or not.
//Input :   "Marvellous"
//           'e'
//Output :  TRUE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;
        }
        i++;
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character to check : \n");
    scanf(" %c",&cValue);

    bRet = CheckChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}