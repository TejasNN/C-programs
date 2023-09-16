/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Design an application for school management system.	As school is primary, there are four standards from 1 to 4.
//						School fees of each standard is different. For first standard fess are 8900, for second standard 12790,
//						for third standard 21000 and for fourth standard fess are 23450. We have to accept standard from user and
//						display the corresponding fees.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define ERR_FOUND 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		SchoolFees		
//	Input :				integer
//	Output :			integer
// 	Description :		Return fees of 1st to 4th standard 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				18/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int SchoolFees(int iStandard)
{
	switch(iStandard)
	{
		case 1 :
			return 8900;
		
		case 2 :
			return 12790;
		
		case 3 :
			return 21000;
			
		case 4 :
			return 23450;
			
		default:
			return ERR_FOUND;
	}
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Please enter the standard for the primary school: \n");
	scanf("%d",&iValue);
	
	iRet = SchoolFees(iValue);
	
	if(iRet == ERR_FOUND)
	{
		printf("Wrong input\n");
	}
	else
	{
		printf("The fees for %d standard is : %d\n",iValue,iRet);
	}
	
	return 0;
}

// Time complexity : NA 