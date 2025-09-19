//Write a program which accept string from user and copy capital characters of that string into another string.
//Input : Utkarsh Shendge
//Output : US
#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if(src[0] == '\0')
    {
        printf("String is empty\n");
        return;
    }

    while (*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
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

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}