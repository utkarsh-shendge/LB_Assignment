/*
Problem Statement   :   Write a program to find odd factorial of given number.
Input               :   5
Ouput               :   15   (1 * 3 * 5)
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iOddFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Value of odd factorial of %d is : %d",iValue,iRet);

    return 0;
}