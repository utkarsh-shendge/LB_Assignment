/*
Problem Statement   :   Write a program which accept number from user and display below pattern.
Input               :   5
Ouput               :   2   4   6   8   10
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iMult = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = 2;
        iMult = iMult * iCnt;
        printf("%d\t",iMult);
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