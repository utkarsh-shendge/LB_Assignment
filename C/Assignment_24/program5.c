//Write a program which accept string from user and display it inn reverse order.
//Input :   "marvellouS"
//Output :  "Suollevram"

#include<stdio.h>

void Reverse(char *str)
{
    int iLength = 0, iCnt = 0;

    while (str[iLength] != '\0')
    {
        iLength++;
    }
    
    for(iCnt = iLength-1; iCnt >= 1; iCnt--)
    {
        printf("%c",str[iCnt]);
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}