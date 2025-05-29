/*
Problem Statement : Accept two numbers from user and display first number in 
                    second number of times.
Input : 12  5
Output : 12 12  12  12  12
*/

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}