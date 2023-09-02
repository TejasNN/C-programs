///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return the count of digits in between 3 and 7.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountRange
//	Input :				integer
//	Output :			integer
// 	Description :		Returns count of digits between 3 and 7 in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit > 3) && (iDigit < 7))
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
	
	iRet = CountRange(iValue);
	
	printf("The count of digits between 3 and 7 is : %d",iRet);
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the place of occurance of digits in the number