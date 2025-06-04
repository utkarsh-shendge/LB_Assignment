/*
Problem Statement   :   Write a program which accept number from user and return the count of even digits.
Input               :   2395
Ouput               :   1
Input               :   4425
Ouput               :   3
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    
    printf("Frequency of even digits in %d is : %d",iValue,iRet);

    return 0;
}