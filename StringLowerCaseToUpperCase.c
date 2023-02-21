# include<stdio.h>

void strlwrX(char *str)
{
	while(*str != '\0')
	{
		if((*str >='a')&&(*str <='z'))
		{
			*str=*str-32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Please Enter The String \n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	
	printf("String After Conversion : %s \n");
	
	return 0;
}