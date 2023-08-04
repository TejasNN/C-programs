// Write a program which accepts the marks and display the class accordingly.
// 0 - 34		Fail
// 35 - 49		Pass class
// 50 - 59		Second class
// 60 - 74		First class
// 75 - 100		First class with distinction

#include<stdio.h>	// For printf and scanf

//////////////////////////////////////////////////////////////////////
//
//	Function name :		DisplayClass
//	Input :				Float
//	Output :			void
// 	Description :		Checks
// 	Author :			Tejas Nanadakumar Nagvekar
// 	Date :				25/04/2023
// 
//////////////////////////////////////////////////////////////////////

void DisplayClass(float fMarks)
{
	if((fMarks < 0.0f) || (fMarks > 100.00f))		// filter
	{
		printf("Invalid Input\n");
		printf("Please enter the marks in between the range 0 to 100\n");
		return;
	}
	
	if((fMarks >= 0.0f) && (fMarks < 35.00f))
	{
		printf("You are failed\n");
	}
	else if((fMarks >= 35.00f) && (fMarks < 50.00f))
	{
		printf("You got pass class\n");
	}
	else if((fMarks >= 50.00f) && (fMarks < 60.00f))
	{
		printf("You got second class\n");
	}
	else if((fMarks >= 60.00f) && (fMarks < 75.00f))
	{
		printf("You got first class\n");
	}
	else if((fMarks >= 75.00f) && (fMarks <= 100.00f))
	{
		printf("You got first class with distinction\n");
	}
}

///////////////////////////////////////////////////////////////
//	Entry Point function
///////////////////////////////////////////////////////////////

int main()
{
	float fValue = 0.0;
	
	printf("Please enter your percentage : \n");
	scanf("%f",&fValue);
	
	DisplayClass(fValue);
	
	return 0;
}