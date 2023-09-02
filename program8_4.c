///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return the multiplication of all digits.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		MultDigits
//	Input :				integer
//	Output :			integer
// 	Description :		Returns multiplication of all digits in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
	int iDigit = 0;
	int iMult = 1;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > 0)
		{
			iMult = iMult * iDigit;
		}
		iNo = iNo / 10;
	}
	return iMult;
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	
	printf("The multiplication is : %d",iRet);
	
	return 0;
}

// Time complexity : N 
// where N is the digits in the input number