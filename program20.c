// Write a program to print numbers from 1 to 5

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)		// Updator for negative input
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter a frequency : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}