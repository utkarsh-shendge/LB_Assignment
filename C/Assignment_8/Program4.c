/*
Problem Statement   :   Write a program which accept temperature in Fahrenheit and convert it into celsius.
Input               :   10
Ouput               :   -12.2222
1 Celsius           :   ((Fahrenheit - 32) * (5.0 / 9.0))
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCel = 0.0;
    dCel = ((fTemp - 32.0) * (5.0 / 9.0));
    return dCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fehrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Entered temperature in Celsius is : %lf",dRet);

    return 0;
}