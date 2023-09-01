///////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program to find a factorial of a given number.               
//																			                                        
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Factorial
//	Input :				integer
//	Output :			integer
// 	Description :		Returns factorial of a input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				06/05/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	if(iNo < 0)							// Updator
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iMult = iMult * iCnt;
	}
	return iMult;
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Factorial of number is : %d",iRet);
	
	return 0;
}

// Time complexity : NA

