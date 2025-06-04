/*
Problem Statement   :   Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input               :   2395
Ouput               :   -15
Input               :   4425
Ouput               :   5
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iSumEven-iSumOdd);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    
    printf("Difference between sum of even digits and odd digitd in %d is : %d",iValue,iRet);

    return 0;
}