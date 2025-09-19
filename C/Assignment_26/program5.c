//Write a program which accept string from user and accept one character.Return index of last occrenece.
//Input :   "abcd"
//Output :  "dcba"

#include<stdio.h>

void StrRevX(char *str)
{
    int iLength = 0, left = 0;

    while (str[iLength] != '\0')
    {
        iLength++;
    }
    iLength--;

    while (left < iLength)
    {
        char temp = str[left];
        str[left] = str[iLength];
        str[iLength] = temp;

        left++;
        iLength--;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Reversed String is: %s\n",arr);

    return 0;
}