/*
Problem Statement   :   Write a program to find factorial of given number.
Input               :   5
Ouput               :   120 (1*2*3*4*5)
Input               :   4
Ouput               :   21  (1*2*3*4)
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d",iValue,iRet);

    return 0;
}