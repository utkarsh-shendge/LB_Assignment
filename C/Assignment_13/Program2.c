/*
Problem Statement   :   Accept number of rows an number of columns from user and display pattern.
Input               :   iRow = 4    iCol = 4
Ouput               :   A   B   C   D
                        a   b   c   d
                        A   B   C   D
                        a   b   c   d
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
   {
        char ch1 = 'A';
        char ch2 = 'a';

        if((i % 2) != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch1);
                ch1++;   
            }
            printf("\n");
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch2);
                ch2++;   
            }
            printf("\n");           
        }
        
   }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}