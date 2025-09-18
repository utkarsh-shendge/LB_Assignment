//Write a program which accept string from user and count number of capital characters
//Input :   "Marvellous Multi OS"
//Output :  4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0, iCount = 0;

    if(str[0] == '\0')
    {
        printf("Empty!!\n");
        return 0;
    }

    while (*str != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Number of capital characters : %d\n",iRet);

    return 0;
}