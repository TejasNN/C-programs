// write a program to display factorial of input number using forward for loop plus add unsigned long int 

#include<stdio.h>

typedef unsigned long int ULONG

ULONG Factorial(int iNo)
{
	int iCnt = 0;
	ULONG iFact = 1;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	ULONG iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Result is : %d\n",iRet);
	
	return 0;
}