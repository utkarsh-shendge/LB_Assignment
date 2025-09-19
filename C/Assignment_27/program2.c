//Write a program which accept string from user and copy the contents of that string into another string.
//Input : Utkarsh Shendge
//      :   10
//Output : Utkarsh Sh
#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    if(src[0] == '\0')
    {
        printf("String is empty\n");
        return;
    }

    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrNCpyX(arr,brr,10);

    printf("%s",brr);

    return 0;
}