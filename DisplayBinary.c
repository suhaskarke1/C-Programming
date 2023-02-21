# include<stdio.h>

void DisplayBinary(int iNo)
{
	int iDigit=0;
	
	while(iNo !=0)
	{
		iDigit=iNo % 2;
		printf("%d",iDigit);
		iNo=iNo/2;
	}
	printf("\n");
}
int main()
{
	unsigned int iValue=0;
	
	printf("Please Enter The Number \n");
	scanf("%d",&iValue);
	
	DisplayBinary(iValue);
	
	
	return 0;
}