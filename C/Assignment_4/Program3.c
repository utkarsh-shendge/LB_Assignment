/*
Problem Statement   :   Write a program which accept number from user and display non-factors.
Input               :   12
Ouput               :   5   7   8   9   10  11
*/

#include<stdio.h>

void DisplayNonFact(int iNo)
{
    int iCnt = 0;

    printf("Non-factors are : \n");
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFact(iValue);

    return 0;
}