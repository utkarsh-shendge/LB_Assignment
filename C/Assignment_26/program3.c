//Write a program which accept string from user and accept one character.Return index of first occrenece.
//Input :   "Marvellous"
//           'e'
//Output :  4

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int i = 0, iCount = -1;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCount = i;
            break;
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

    iRet = FirstChar(arr,cValue);

    printf("%d\n",iRet);

    return 0;
}