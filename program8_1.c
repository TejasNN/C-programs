/////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return count of even digits.                
//																			                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountEven
//	Input :				integer
//	Output :			integer
// 	Description :		Returns count of even digits in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
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
		if(iDigit % 2 == 0)
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
	
	iRet = CountEven(iValue);
	
	printf("The count of even digits is : %d",iRet);
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the place of occurance of even digits in the input number.
