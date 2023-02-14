# include<stdio.h>
#include <stdbool.h>

bool DivisiableByThreeAndFive(int iNo)
{
	
	 if(((iNo % 3 )==0)&&(iNo % 5)==0)
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