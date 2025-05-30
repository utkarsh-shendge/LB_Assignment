/*
Problem Statement   :   Write a program which accept number from user and displays multiplication of factors.
Input               :   12
Ouput               :   144 (1*2*3*4*6)
*/

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMul = 1;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d ",iRet);


    return 0;
}