/*
Problem Statement   :   Write a program which accepts radius of circle from user and calculate its area.Consider PI as 3.14.
Input               :   5.3
Ouput               :   88.202600
Area                :   PI * Radius * Radius
*/

#include<stdio.h>

double CicleArea(double fRadius)
{
    double Area = 0.0;
    double PI = 3.14;
    Area = (PI * fRadius * fRadius);
    return Area;
}

int main()
{
    double fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%lf",&fValue);

    dRet = CicleArea(fValue);

    printf("Area of circle having radius %lf is : %lf",fValue,dRet);

    return 0;
}