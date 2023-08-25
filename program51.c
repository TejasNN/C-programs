// PROBLEMS ON DIGITS
// Write a program to print the input number in reverse

#include<stdio.h>

void DisplayDigits(int iNo)
{
	int iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d",iDigit);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
	
	return 0;
}