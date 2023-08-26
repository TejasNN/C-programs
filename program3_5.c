////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return difference of all its factors and non factors 
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		FactDiff
//	Input :				integer
//	Output :			integer
// 	Description :		Returns the difference of sumamtion of factors and non factors of input number 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iFact = 0;
	int iFactN = 0;
	int iDiff = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iFact = iFact + iCnt;
		}
		else
		{
			iFactN = iFactN + iCnt;
		}
	}
	iDiff = iFact - iFactN;
	return iDiff;
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
	
	iRet = FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}

// Time complexity : O(N)
// Where N is the input (Natural number)