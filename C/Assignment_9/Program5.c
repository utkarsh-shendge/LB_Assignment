/*
Problem Statement   :   Write a program which accept number from user and count frequency of such digits which are less than 6.
Input               :   2395
Ouput               :   3
Input               :   4425
Ouput               :   4
*/

#include<stdio.h>

int CountLessThanSix(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = CountLessThanSix(iValue);
    
    printf("Frequency of digits less than 6 in %d is : %d",iValue,iRet);

    return 0;
}