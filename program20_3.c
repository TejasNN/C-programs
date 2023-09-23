///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept character from user and check whether it is digit or not. (0-9) 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CheckDigit
//	Input :				character
//	Output :			boolean
// 	Description :		Returns true if the input character is a digit.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				21/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckDigit(char ch)
{
	bool bFlag = false;
	
	if((ch >= '0') && (ch <= '9'))
	{
		bFlag = true;
	}
	return bFlag;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter a character : \n");
	scanf("%c",&cValue);
	
	bRet = CheckDigit(cValue);
	
	if(bRet == true)
	{
		printf("It is a digit\n");
	}
	else
	{
		printf("It is not a digit\n");
	}
	
	return 0;
}

// Time complexity : NA