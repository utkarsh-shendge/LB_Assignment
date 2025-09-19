//Write a program which accept string from user and display it in lower case.
//Input :   "MarvellouS"
//Output :  "marvellous"

#include<stdio.h>

void strlwrx(char *str)
{
    int  i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
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

    strlwrx(arr);

    return 0;
}