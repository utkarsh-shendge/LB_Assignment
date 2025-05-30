/*
Problem Statement   :   Write a program which accept number from user and returns difference between sum of its all factors and non-factors.
Input               :   12
Ouput               :   -34 (16-50)
*/

#include<stdio.h>

int DiffFact(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return (iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DiffFact(iValue);

    printf("Difference between factors and non-factors  is : %d",iRet);

    return 0;
}