//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and check whether it contains 0 in it or not.               
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////
//
//	Function name :		CheckZero
//	Input :				integer
//	Output :			BOOL
// 	Description :		Returns true if there is 0 in a input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				10/05/2023
// 
//////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
	int iDigit = 0;
	int bFlag = FALSE;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			bFlag = TRUE;
			break;
		}
		iNo = iNo / 10;
	}
	return bFlag;
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = CheckZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("It contains zero\n");
	}
	else
	{
		printf("There is no zero\n");
	}
	
	return 0;
}

// Time complexity : Cannot be predicted, it purely depends on the position of 0.

