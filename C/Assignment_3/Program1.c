/*
Problem Statement   :   Write a program which accepts one number from user and print that number of even numbers on screen
Input               :   7
Output              :   2   4   6   8   10  12  14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int even = 2;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",even);
        even = even + 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}