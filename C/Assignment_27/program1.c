//Write a program which accept string from user and copy the contents of that string into another string.

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    if(src[0] == '\0')
    {
        printf("String is empty\n");
        return;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}