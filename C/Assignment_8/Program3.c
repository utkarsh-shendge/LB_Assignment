/*
Problem Statement   :   Write a program which accepts kilometer and convert it into meter.
Input               :   5
Ouput               :   5000
1 kilometer         :   1000 meter
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = (iNo * 1000);
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Entered distance in meters is : %d",iRet);

    return 0;
}