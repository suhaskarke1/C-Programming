# include<stdio.h>

int Factorial(int iNO)
{
	int iCnt=0;
	int iFact=1;
	for(iCnt=1;iCnt<=iNO;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Please Enter The Number \n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	
	printf("Factoroial Of %d is : %d \n",iValue,iRet);
	
	
	return 0;
}