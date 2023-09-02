/////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and count frequency of 4 in it.                
//																			                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountFour
//	Input :				integer
//	Output :			integer
// 	Description :		Returns occurance of digit 4 in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 4)
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
	
	iRet = CountFour(iValue);
	
	printf("The frequency of %d in %d is %d", 4,iValue,iRet);
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the occurance of 2 in the input number.

