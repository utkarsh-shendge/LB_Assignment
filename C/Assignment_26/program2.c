//Write a program which accept string from user and accept one character.Return freq of that character.
//Input :   "Marvellous"
//           'e'
//Output :  1

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int i = 0, iCount = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCount++;
        }
        i++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character to check : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("%d\n",iRet);

    return 0;
}