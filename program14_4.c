///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which display below pattern. 
//
//  Input : 4             
//			
//	Output :	#	1	*	#	2	*	#	3	*	#	4	*
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Pattern
//	Input :				integer
//	Output :			void
// 	Description :		Display pattern.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				16/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
	printf("\n");
}
/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of elements