/*
Problem Statement   :   Write a program which accept N from user and print all odd numbers upto N.
Input               :   5
Ouput               :   1   3   5  
*/

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    
    printf("Odd numbers till %d : \n",iNo);
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}