/*
Problem Statement   :   Write a program which accept number from user and display below pattern.
Input               :   5
Ouput               :   A   B   C   D   E
Input               :   2
Ouput               :   A   B
*/

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}