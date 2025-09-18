//Write a program which accept string from user and check whether it contains vowels in it or not
//Input :   "marvellous"
//Output :  TRUE
//Input :   "Xyz"
//Output :  FALSE

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while (*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return true;
        }
        else if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return true;
        }
        str++;
    }
    
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    bRet = CheckVowel(arr);

    if(bRet == true)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

    return 0;
}