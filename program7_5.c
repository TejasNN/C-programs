////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and count frequency of such a digits which are less than 6.                
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Count
//	Input :				integer
//	Output :			integer
// 	Description :		Returns occurance of digits less than 6 in the input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
	int iDigit = 0;
	int iCount = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit < 6)
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
	
	iRet = Count(iValue);
	
	printf("The frequency of digits less than 6 is : %d",iRet);
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the place of occurance of digits in the input number.


