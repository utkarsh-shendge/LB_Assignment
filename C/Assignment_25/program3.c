//Write a program which accept string from user and display it in upper case.
//Input :   "MarvellouS"
//Output :  "mARVELLOUs"

#include<stdio.h>

void strtogglex(char *str)
{
    int  i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            printf("%c",str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
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

    strtogglex(arr);

    return 0;
}