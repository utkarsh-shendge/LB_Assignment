//Accept Character from user and check whether it is small case alphabet(a-z)
//Input :   a
//Output :  TRUE
//Input :   C
//Output :  FALSE

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char cDiv)
{
    if((cDiv >= 'A' && cDiv <= 'D') || (cDiv >= 'a' && cDiv <='d'))
    {
        if(cDiv == 'A' || cDiv == 'a')
        {
            printf("Your exam is at 7 AM\n");
        }
        else if(cDiv == 'B' || cDiv == 'b')
        {
            printf("Your exam is at 8.30 AM\n");
        }
        else if(cDiv == 'C' || cDiv == 'C')
        {
            printf("Your exam is at 9.20 AM\n");
        }
        else if(cDiv == 'D' || cDiv == 'D')
        {
            printf("Your exam is at 10.30 AM\n");
        }
    }
    else
    {
        printf("Invalid Input!!\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}