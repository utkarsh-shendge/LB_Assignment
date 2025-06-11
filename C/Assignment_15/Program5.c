/*
Problem Statement   :   Accept number of rows an number of columns from user and display pattern.
Input               :   iRow = 4    iCol = 4
Ouput               :   1   2   3   4
                        1   *   *   4
                        1   *   *   4
                        1   2   3   4
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;

   for(i = 1; i <= iRow; i++)
   {
        for(j = 1; j <= iCol; j++)
        {
            if((i > 1) && (i < iRow) && (j > 1) && (j < iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
                
        printf("\n");
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