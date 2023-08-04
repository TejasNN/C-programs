// Write a program which accepts two numbers from user as x and y and give x raised to y as output
// use filter to avoid negative values

#include<stdio.h>

long int CalculatePower(int iBase, int iPower)
{
	int iCnt = 0;
	long int iResult = 1;
	
	if((iBase < 0) || (iPower < 0))			// Filter
	{
		return 0;
	}
	
	for(iCnt = 1; iCnt <= iPower; iCnt++)
	{
		iResult = iResult * iBase;
	}
	return iResult;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	long int iRet = 0;
	
	printf("Enter base : \n");			
	scanf("%d",&iValue1);
	printf("Enter power : \n");			
	scanf("%d",&iValue2);
	
	iRet = CalculatePower(iValue1,iValue2);
	
	printf("Result is : %d\n",iRet);
	
	return 0;
}