/*
	Steps to create the application
	
	Step 1 : Understand the problem
	Step 2 : Write the algorithm
	Step 3 : Decide the programming language
	Step 4 : Write the program
	Step 5 : Test the written program
	
*/

// Write a program which performs addition of two numbers

/*
	Algorithm
	
	START
		Accept first number as No1
		Accept second number as No2
		Create one variable as Ans
		Perform Addition of No1 and No2
		Store the addition into variable Ans
		Display the value of Ans
	STOP
*/

/////////////////////////////////////////////////////////////////////////////////
//																			   //
//	Problem statement : Write a program which performs addition of two numbers //
//																			   //
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//																			  //
//	Function Name : Addition												  //
//	Input		  : Unsigned integer, Unsigned integer						  //
//	Output		  : Unsigned integer										  //
//	Description	  : Performs addition of 2 numbers							  //
//	Author		  : Tejas Nandakumar Nagvekar								  //
//	Date		  : 18/04/2023 + 19/04/2023												  //
//																			  //
////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
	unsigned int iResult = 0;
	iResult = iValue1 + iValue2;
	return iResult;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	auto unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;
	
	printf("Enter first number : \n");
	scanf("%d",&iNo1);
	
	printf("Enter second number : \n");
	scanf("%d",&iNo2);
	
	iAns = Addition(iNo1, iNo2);
	
	printf("Addition is : %d", iAns);
	
	return 0;
}