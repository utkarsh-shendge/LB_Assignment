/*
Problem Statement   :   Write a program which accept number from user and displays factors in decreasing order.
Input               :   12
Ouput               :   6   4   3   2   1
*/

#include<stdio.h>

void DisplayFact(int iNo)
{
    int iCnt = 0;

    printf("Factors in decreasing order : \n");
    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    DisplayFact(iValue);

    return 0;
}