//Accept N numbers from user and accept one another number as NO and return frequency of NO from it
//Input :   N   :   6
//          Elements : 85   66  66   80  93  88
//          NO  : 66
//Output    :   2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if(iNo == Arr[i])
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iNo = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter number to check frequency : \n");
    scanf("%d",&iNo);

    iRet = Frequency(p,iSize,iNo);

    printf("%d\n",iRet);

    free(p);

    return 0;
}