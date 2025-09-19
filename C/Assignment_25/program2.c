//Write a program which accept string from user and display it in upper case.
//Input :   "MarvellouS"
//Output :  "MARVELLOUS"

#include<stdio.h>

void struprx(char *str)
{
    int  i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            printf("%c",str[i]);
        }
        else
        {
            printf("%c",str[i]);
        }
        i++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    return 0;
}