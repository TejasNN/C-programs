////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and display its table in reverse.               
//																			                                        
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//	Function name :		TableRev
//	Input :				integer
//	Output :			void
// 	Description :		Returns table of a input number in reverse.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				07/05/2023
// 
//////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
	int iCnt = 0;
	int iSub = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iSub = iNo * 11;
	
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		iSub = iSub - iNo;
		printf("%d\t",iSub);
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
	
	TableRev(iValue);
	
	return 0;
}

// Time complexity : N
// where N is the natural number

