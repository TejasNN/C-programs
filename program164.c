// write a program to accept a string and display the count of digits using our defined function

#include<stdio.h>

int strlenDigitsX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= '0') && (*str <= '9'))
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
	
	iRet = strlenDigitsX(Arr);
	
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}