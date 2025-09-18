//Write a program which displays ASCII table.Table contains symbol,
//Decimal,Hexadecimal and Octal representation of every member from 0 to 255

#include<stdio.h>
#include<ctype.h>

void DisplayASCII() 
{
    printf("-------------------------------------------------\n");
    printf("| %-10s | %-10s | %-10s | %-10s |\n", "Symbol", "Decimal", "Hexadecimal", "Octal");
    printf("-------------------------------------------------\n");

    for (int i = 0; i <= 255; i++) {
        if (isprint(i)) {
            printf("| %-10c | %-10d | %-10X | %-10o |\n", i, i, i, i);
        } else {
            printf("| %-10s | %-10d | %-10X | %-10o |\n", ".", i, i, i);
        }
    }

    printf("-------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}