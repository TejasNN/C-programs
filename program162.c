// write a program to accept a string and display the count of small characters using our defined function

#include<stdio.h>

int strlenSmall(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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
	
	iRet = strlenSmall(Arr);
	
	printf("Number of small letters are : %d\n",iRet);
	
	return 0;
}