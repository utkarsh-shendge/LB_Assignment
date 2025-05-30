/*
Problem Statement   :   Write a program which accept number from user and print its number line.
Input               :   5
Ouput               :   -5  -4  -3  -2  -1  0   1   2   3   4   5  
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}