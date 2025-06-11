/*
Problem Statement   :   Accept number of rows an number of columns from user and display pattern.
Input               :   iRow = 5    iCol = 5
Ouput               :   a   b   c   d   e
                        1   2   3   4   5
                        a   b   c   d   e
                        1   2   3   4   5
                        a   b   c   d   e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
   {
        if((i % 2) == 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",j); 
            }
            printf("\n");
        }
        if((i % 2) != 0)
        {
            char ch = '\0';
            for(ch = 'a',j = 1; j <= iCol; j++,ch++)
            {
                printf("%c\t",ch);
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