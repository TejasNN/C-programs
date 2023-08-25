// Accept one number from the user and print that number of *'s on screen

#include<stdio.h>

void Display(int iNo)
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
	
	Display(iValue);
	
	return 0;
}