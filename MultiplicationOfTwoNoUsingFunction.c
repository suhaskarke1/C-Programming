# include<stdio.h>

int Multiplication(int iNo1,int iNo2)
{
	int iMult=1;
	
	iMult=iNo1*iNo2;
	return iMult;
}
int main()
{
	int i=0;
	int j=0;
	int iRet=0;
	
	printf("Enter First Number \n");
	scanf("%d",&i);
	
	printf("Enter Secound Number \n");
	scanf("%d",&j);
	
	iRet=Multiplication(i,j);
	
	printf("Multiplication is : %d \n",iRet);
	
	return 0;
}