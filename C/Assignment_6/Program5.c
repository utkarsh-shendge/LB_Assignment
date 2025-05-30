/*
Problem Statement   :   Write a program which accept number from user and display its table in reverse order.
Input               :   5
Ouput               :   50  45  40  35  30  25  20  15  10  5
*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
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