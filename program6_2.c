////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Accept single number from the user and print it in words.               
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Display
//	Input :				integer
//	Output :			void
// 	Description :		Prints the single digit input number in words.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				06/05/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	if(iNo == 0)
	{
		printf("Zero");
	}
	else if((iNo == 1) || (iNo == -1))
	{
		printf("One");
	}
	else if((iNo == 2) || (iNo == -2))
	{
		printf("Two");
	}
	else if((iNo == 3) || (iNo == -3))
	{
		printf("Three");
	}
	else if((iNo == 4) || (iNo == -4))
	{
		printf("Four");
	}
	else if((iNo == 5) || (iNo == -5))
	{
		printf("Five");
	}
	else if((iNo == 6) || (iNo == -6))
	{
		printf("Six");
	}
	else if((iNo == 7) || (iNo == -7))
	{
		printf("Seven");
	}
	else if((iNo == 8) || (iNo == -8))
	{
		printf("Eight");
	}
	else if((iNo == 9) || (iNo == -9))
	{
		printf("Nine");
	}
	else
	{
		printf("Invalid input");
	}
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

// Time complexity : NA

