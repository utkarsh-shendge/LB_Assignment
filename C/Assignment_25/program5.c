//Write a program which accept string from user and count number of white spaces.
//Input :   "Marvell1 o uS11"
//Output :  2

#include<stdio.h>

int CountWhite(char *str)
{
    int  i = 0, iCount = 0;
    while (str[i] != '\0')
    {
        if(str[i] == ' ')
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
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d\n",iRet);

    return 0;
}