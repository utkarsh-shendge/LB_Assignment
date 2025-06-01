/*
Problem Statement   :   Write a program which accept area in square feet and convert it into square meter.
Input               :   5
Ouput               :   0.464515
1 sq.ft             :   0.092903 sq.m
*/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;
    dSqMeter = (iValue * 0.092903);
    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Entered area in square meter is : %lf",dRet);

    return 0;
}