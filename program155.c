// write a program to check if the input character is small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
	int iCnt = 0;
	
	if((cValue >= 'a') && (cValue <= 'z'))
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
	char ch = '\0';
	bool bRet = false;
	
	printf("Enter character : \n");
	scanf("%c",&ch);
	
	bRet = CheckSmall(ch);
	
	if(bRet == true)
	{
		printf("%c is a small letter\n",ch);
	}
	else
	{
		printf("%c is not a small letter\n",ch);
	}
	
	return 0;
}