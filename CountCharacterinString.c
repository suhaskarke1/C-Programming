# include<stdio.h>

int strlenX(char *str)
{
	int i=0;
	int iCnt=0;
	
	while(str[i] !='\0')
	{
		iCnt++;
		i++;
	}
	return iCnt;
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Please Enter The String \n");
	scanf("%[^['\n']s",Arr);
	
	iRet=strlenX(Arr);
	
	printf("Number of Character Are  %d \n",iRet);
	
	
	return 0;
}