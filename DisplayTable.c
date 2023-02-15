# include<stdio.h>

void DisplayTable(int iNo)
{
	int iCnt=0;
	
	printf("----------------------------------------------------------------");
	printf("Table of %d is :",iNo);
	printf("----------------------------------------------------------------");
	
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		printf("%d",iNo *iCnt);
	}
	printf("-----------------------------------------------------------------");
}

int main()
{
	int iValue=0;
	
	printf("Please Enter The Number \n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}