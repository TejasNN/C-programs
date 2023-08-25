// Write a program to accept one number from the user and print that number of *'s on the screen.

#include<stdio.h>

void Accept(int iNo)
{
	int iCnt = 0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("*");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
		
	Accept(iValue);
	return 0;
}