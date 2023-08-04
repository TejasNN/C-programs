// Write a program to print factors of a input number

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter a number : \n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}