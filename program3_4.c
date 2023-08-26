////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and return summation of all its non factors  
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		SumNonFact
//	Input :				integer
//	Output :			integer
// 	Description :		Returns the sumamtion of non factors of input number 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
///////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
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
	
	iRet = SumNonFact(iValue);
	
	printf("Summation of non factors of %d is : %d",iValue,iRet);
	
	return 0;
}

// Time complexity : O(N)
// Where N is the input (Natural number)