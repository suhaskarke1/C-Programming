#include<stdio.h>

// Input : 6
// Output : 9

// Input : 15
// Output : 96

int SumNonFactors(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the numebr\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);
    printf("Summation of non factors are %d\n",iRet);
    return 0;
}