// write a program to accept a string and check whether z is prent there or not using our defined function

#include<stdio.h>

int CountChar(char *str, char cValue)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == 'cValue')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
		
int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter the character : \n");
	scanf("%c",&ch);
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountChar(Arr,ch);

	printf("Charac : %d\n",iRet");
	
	return 0;
}