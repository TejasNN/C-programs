// write a program to accept a string and check whether z is prent there or not using our defined function

#include<stdio.h>
#include<stdio.h>

bool CountAlphabet(char *str)
{
	int iCnt = 0;
	bool bFlag = 0;
	
	while(*str != '\0')
	{
		if(*str == 'z')
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
	
	iRet = CountAlphabet(Arr);
	
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}