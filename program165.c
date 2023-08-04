// write a program to accept a string and display the count number of vowels using our defined function

#include<stdio.h>

int strlenVowels(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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
	
	iRet = strlenVowels(Arr);
	
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}