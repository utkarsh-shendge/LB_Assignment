//Write a program which accept string from user and copy small characters of that string into another string.
//Input : Utkarsh
//Output : tkarsh
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
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;
}