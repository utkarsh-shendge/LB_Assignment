//Write a program which accept 2 strings from user and concat second string after first string.
//Input : Utkarsh Shendge
//      : Beed
//Output : Utkarsh Shendge Beed
#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if(src[0] == '\0')
    {
        printf("String is empty\n");
        return;
    }

    while (*src != '\0')
    {
        src++;
    }
    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    
    *src = '\0';
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter string : \n");
    scanf(" %[^'\n']s",brr);

    StrCpySmall(arr,brr);

    printf("%s",arr);

    return 0;
}