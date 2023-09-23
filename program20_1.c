///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept character from user and check whether it is alphabet or not. (a-z,A-Z) 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CheckAlpha
//	Input :				character
//	Output :			boolean
// 	Description :		Returns true if the input character is an Alphabet.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				21/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckAlpha(char ch)
{
	bool bFlag = false;
	
	if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
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
	
	bRet = CheckAlpha(cValue);
	
	if(bRet == true)
	{
		printf("%c is an alphabet\n",cValue);
	}
	else
	{
		printf("%c is not an alphabet\n",cValue);
	}
	
	return 0;
}

// Time complexity : NA