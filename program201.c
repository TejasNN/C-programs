// Write a program to check for pallindrome

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
	char *start = NULL;
	char *end = NULL;
	bool bFlag = true;
	
	start = str;
	end = start;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if(*start != *end)
		{
			bFlag = false;
			break;
		}
		start++;
		end--;
	}
	return bFlag;	
}
int main()
{
	char Arr[20];
	bool bRet = false;
	
	printf("Enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	bRet = CheckPallindrome(Arr);
	
	if(bRet == true)
	{
		printf("String is pallindrome\n");
	}
	else
	{
		printf("String is not pallindrome\n");
	}
	
	return 0;
}