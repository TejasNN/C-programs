// Write a program to accept one number and check if it is divisible by 5.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
	if((iNo % 5) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("It is divisible by 5");
	}
	else
	{
		printf("Not divisible by 5");
	}
	
	return 0;
}