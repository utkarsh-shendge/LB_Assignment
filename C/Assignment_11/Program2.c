/*
Problem Statement   :   Write a program which accept number from user and display below pattern.
Input               :   5
Ouput               :   5   #   4   #   3   #   2   #   1   #
Input               :   2
Ouput               :   2   #   1   #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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