# include<stdio.h>
# include<stdbool.h>

bool CheakPerfect(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			iSum=iSum+iCnt;
	 
	      }
			
			}
	     if(iNo==iSum)
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
	bool bRet= false;
	
	printf("Please Enter The Number\n");
	scanf("%d",&iValue);
	
	bRet=CheakPerfect(iValue);
	
	if(bRet==true)
	{
		printf("%d Number is Perfect \n",iValue);
		
	}
	else
	{
		printf("%d Number is Not Perfect \n",iValue);
	}
	
	
	
	return 0;
}