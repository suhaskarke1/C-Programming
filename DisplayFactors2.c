# include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt=0;
	printf("Factors Are \n");
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
	   if((iNo %iCnt) ==0)
	   {
		   printf("%d \n",iCnt);
	   }
	}
}
int main()
{
	int iValue=0;
	
	printf("Please Enter The Number \n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}