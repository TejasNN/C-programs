// write a program to accept a string and display the count number of white spaces using our defined function

#include<stdio.h>

int CountSpace(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ' ')
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
	int iRet = 0;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSpace(Arr);
	
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}