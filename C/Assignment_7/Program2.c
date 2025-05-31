/*
Problem Statement   :   Accept amount is US dollar and return its corresponding value in Indian currency(1$ = 70 rupees).
Input               :   10
Ouput               :   700
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;
    iINR = 70 * iNo;
    return iINR;    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}