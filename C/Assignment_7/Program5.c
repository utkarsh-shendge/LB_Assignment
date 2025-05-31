/*
Problem Statement   :   Write a program which returns difference between even factorial and  odd factorial of given number.
Input               :   5
Ouput               :   -7   (8 - 15)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iOddFact = 1, iEvenFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even factorial and  odd factorial of %d is : %d",iValue,iRet);

    return 0;
}