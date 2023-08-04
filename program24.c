// Write a program to print factors of a input number
// Optimized code

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)		// O(N/2)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
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

// Time complexity : O(N/2)
// Where N is the input (Natural number)