/*
Problem Statement   :   Write a program which accept N from user and print first 5 multiples of N.
Input               :   5
Ouput               :   5   10  15  20  25
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0, iMultiple = 0;
    
    printf("First 5 multiples of %d : \n",iNo);
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMultiple = 1;
        iMultiple = iCnt * iNo;
        printf("%d\t",iMultiple);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}