//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return the difference between the summation of even and odd digits.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountDiff
//	Input :				integer
//	Output :			integer
// 	Description :		Returns difference between summation of even and odd digits of the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
	int iDigit = 0;
	int iMult = 1;
	int iEven = 0;
	int iOdd = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iEven = iEven + iDigit;
		}
		else
		{
			iOdd = iOdd + iDigit;
		}
		iNo = iNo / 10;
	}
	return iEven - iOdd;
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
	
	iRet = CountDiff(iValue);
	
	printf("The multiplication is : %d",iRet);
	
	return 0;
}

// Time complexity : N 
// where N is the digits in the input number