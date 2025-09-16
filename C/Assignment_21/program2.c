//Accept N numbers from user and return the smallest number
//Input :   N   :   6
//          Elements : 85   66  3   66  93  88
//Output : 3

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p,iSize);

    printf("Smallest Number is : %d\n",iRet);

    free(p);

    return 0;
}