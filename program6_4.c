/////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and display its table.               
//																			                                        
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//	Function name :		Table
//	Input :				integer
//	Output :			void
// 	Description :		Returns table of a input number.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				07/05/2023
// 
////////////////////////////////////////////////////////////

void Table(int iNo)
{
	int iCnt = 0;
	int iAdd = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		iAdd = iAdd + iNo;
		printf("%d\t",iAdd);
	}
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	Table(iValue);
	
	return 0;
}

// Time complexity : N
// where N is the natural number

