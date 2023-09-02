/////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return count of odd digits.                
//																			                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountOdd
//	Input :				integer
//	Output :			integer
// 	Description :		Returns count of odd digits in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 != 0)
		{
			iCount++;
		}
		iNo = iNo / 10;
	}
	return iCount;
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
	
	iRet = CountOdd(iValue);
	
	printf("The count of odd digits is : %d",iRet);
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the place of occurance of odd digits in the input number.