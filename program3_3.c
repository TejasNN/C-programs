////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and display all its non factors  
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//	Function name :		NonFact
//	Input :				integer
//	Output :			print statement
// 	Description :		Returns the non factors of input number 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
//////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\t",iCnt);
		}
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
	
	NonFact(iValue);
	
	return 0;
}

// Time complexity : O(N)
// Where N is the input (Natural number)