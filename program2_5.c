// Accept number from user and check if it is even or odd
	
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
	if((iNo % 2) == 0)
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
	
	printf("Enter value : ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("It is even");
	}
	else
	{
		printf("It is odd");
	}
	
	return 0;
}