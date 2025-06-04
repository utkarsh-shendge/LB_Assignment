/*
Problem Statement   :   Write a program which accept number from user and return the multiplication of all digits.
Input               :   2395
Ouput               :   270
Input               :   4425
Ouput               :   160
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    
    printf("Multiplication of digits in %d is : %d",iValue,iRet);

    return 0;
}