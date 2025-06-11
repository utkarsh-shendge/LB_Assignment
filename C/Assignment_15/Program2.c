/*
Problem Statement   :   Accept number of rows an number of columns from user and display pattern.
Input               :   iRow = 4    iCol = 5
Ouput               :   2   4   6   8   10
                        1   3   5   7   9
                        2   4   6   8   10
                        1   3   5   7   9
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0, iCount = 0;

   for(i = 1; i <= iRow; i++)
   {
        if((i % 2) == 0)
        {
            for(iCount = 1,j = 1; j <= iCol; j++)
            {
                if((iCount % 2) != 0)
                {
                    printf("%d\t",iCount);
                    iCount = iCount + 2;
                }
                 
            }
            printf("\n");
        }
        if((i % 2) != 0)
        {
            for(iCount = 2,j = 1; j <= iCol; j++)
            {
                if((iCount % 2) == 0)
                {
                    printf("%d\t",iCount);
                    iCount = iCount + 2;
                }
                 
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