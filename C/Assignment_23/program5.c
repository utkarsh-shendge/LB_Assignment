//Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.
//Input :   A
//Ouput :   Decimal 65
//          Octal   0101
//          Hexadecimal 0X41

#include<stdio.h>
#include<ctype.h>

void Display(char ch)
{
    printf("Decimal : %-10d\nOctal : %-10o\nHexadecimal : %-10X",ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}