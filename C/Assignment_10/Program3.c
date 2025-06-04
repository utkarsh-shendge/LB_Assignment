/*
Problem Statement   :   Write a program which accept number from user and return the count of digits in between 3 and 7.
Input               :   2395
Ouput               :   1
Input               :   4425
Ouput               :   3
*/

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);
    
    printf("Frequency of digits in between 3 and 7 in %d is : %d",iValue,iRet);

    return 0;
}