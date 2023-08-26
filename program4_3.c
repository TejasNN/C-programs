//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept two numbers and check whether numbers are equal or not               
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		ChkEqual
//	Input :				integer
//	Output :			Boolean
// 	Description :		Function to check if the two input numbers are equal or not  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
/////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
	if(iNo1 == iNo2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0, iValue2 = 0;
	BOOL bRet = FALSE;
	
	printf("Please enter two numbers : \n");
	scanf("%d %d",&iValue1,&iValue2);
	
	bRet = ChkEqual(iValue1,iValue2);
	
	if(bRet == TRUE)
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
	
	return 0;
}

// Time complexity : NA
