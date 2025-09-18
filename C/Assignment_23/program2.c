//Accept character from user. If char is small then display its capital and vice-versa.
//In other case display as it is.
//Input :   Q
//Ouput :   q
//Input :   m
//Ouptut :  M
//Input :   4
//Output :  4


#include<stdio.h>
#include<ctype.h>

void Display(char ch) 
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
    }
    

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}