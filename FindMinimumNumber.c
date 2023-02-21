# include<stdio.h>
# include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
	int iCnt=0;
	int iMin=Arr[0];
	
	for(iCnt=1;iCnt<=iSize;iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
}
int main()
{
	int *Ptr=NULL;
	int iLength=0;
	int i=0;
	int iRet=0;
	
	printf("Enter The Size Of Array \n");
	scanf("%d",&iLength);
	
	Ptr=(int *)malloc(sizeof(int)*iLength);
	
	printf("Enter The Elements \n");
	for(i=1;i<=iLength;i++)
	{
		scanf("%d",&Ptr[i]);
	}
	iRet=Minimum(Ptr,iLength);
	
	printf("Minimum Number is %d",iRet);
	
	return 0;
}