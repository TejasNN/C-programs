////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and display its digits in reverse.               
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//	Function name :		DisplayDigit
//	Input :				integer
//	Output :			void
// 	Description :		Display input number's digits in reverse.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
//////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	int iReverse = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo / 10;
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
	
	DisplayDigit(iValue);
	
	return 0;
}

// Time complexity : N
// where N is the digits in the input number

