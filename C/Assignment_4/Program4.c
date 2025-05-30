/*
Problem Statement   :   Write a program which accept number from user and returns sum of its all non-factors.
Input               :   12
Ouput               :   50    (5 + 7 + 8 + 9 + 10 + 11)
*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Sum of non-factors is : %d",iRet);

    return 0;
}