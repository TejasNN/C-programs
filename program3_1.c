///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return the multiplication of its factors  
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		MultiFactor
//	Input :				integer
//	Output :			integer
// 	Description :		Returns the multiplication of factors of input number
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
///////////////////////////////////////////////////////////////////////////////

int MultiFactor(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iMult = iMult * iCnt;
		}
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
	
	iRet = MultiFactor(iValue);
	
	printf("The multiplication of factors of %d are : %d",iValue,iRet);
	
	return 0;
}

// Time complexity : O(N/2)
// Where N is the input (Natural number)