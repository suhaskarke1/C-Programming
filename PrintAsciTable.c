# include<stdio.h>

int main()
{
	int iCnt=0;
	
	printf("----------------------------------------------------------------------------\n");
	printf("ASCI Table \n");
	printf("-----------------------------------------------------------------------------\n");
	
	printf("Chracter \t Decimal \t Hexa \t Ocatl \t \n");
	for(iCnt=0;iCnt<=127;iCnt++)
	{
		 printf("%c        \t %d      \t%x      \t       %o \n",iCnt,iCnt,iCnt,iCnt);
	}
	printf("\n---------------------------------------------------------------------------------\n");
	
	return 0;
}