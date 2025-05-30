/*
Problem Statement   :   Write a program which accept number from user and display its table.
Input               :   5
Ouput               :   5   10  15  20  25  30  35  40  45  50
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}