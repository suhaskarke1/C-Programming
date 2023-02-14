# include<stdio.h>
#include <stdbool.h>

bool DivisiableByThreeAndFive(int iNo)
{
	int iAns1=0;
	int iAns2=0;
	iAns1=iNo % 3;
	iAns2=iNo % 5;
	
	 if((iAns1 == 0)&&(iAns2 ==0))
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
} 

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Please Enter The Number \n");
	scanf("%d",&iValue);
	
	bRet=DivisiableByThreeAndFive(iValue);
	
	if(bRet==true)
	{
		printf("Number is Divisiable By Three And Five : %d \n ",iValue);
	}
	else
	{
		printf("Number is Not Divisiable By Three And Five :  %d \n ",iValue);
	}
}