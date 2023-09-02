/////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and count frequency of 2 in it.               
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountTwo
//	Input :				integer
//	Output :			integer
// 	Description :		Returns frequency of digit 2 in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 2)
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
	
	iRet = CountTwo(iValue);
	
	printf("The frequency of %d in %d is %d", 2,iValue,iRet);
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the occurance of 2 in the input number.

