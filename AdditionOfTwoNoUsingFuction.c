# include<stdio.h>

int Addition(int A,int B)
{
	int iAns=0;
	iAns = A + B;
	
	return iAns;
}
int main()
{
	int iNo1=10;
	int iNo2=11;
	
	int iRet=0;
	
	iRet=Addition(iNo1,iNo2);
	printf("Addition of two no is :%d \n",iRet);
	
	return 0;
}