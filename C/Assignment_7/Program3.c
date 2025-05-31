/*
Problem Statement   :   Write a program to find even factorial of given number.
Input               :   5
Ouput               :   8   (2 * 4)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return iEvenFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Value of even factorial of %d is : %d",iValue,iRet);

    return 0;
}