///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	We have to design application for tourist company. Tourist company provides cars on rent. Depends on the 
//						running of car they apply rent. If running is less than 100 kilometers, then they charge 25 rupees per kilometers 
//						and if running is more than 100 kilometers then they apply 15 rupees per kilometer after 100 kilometers.
//						We have to accept number of kilometers from the user and return the estimated rent.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		TouristBill		
//	Input :				integer
//	Output :			integer
// 	Description :		Return estimated rent for input kilometers.
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				18/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int TouristBill(int iKilometer)
{
	int iCnt = 0, iCharge = 0;
	
	if(iKilometer < 100)
	{
		iCharge = iKilometer * 25;
	}
	else
	{
		iCharge = 2500 + ((iKilometer - 100) * 15);
	}
	return iCharge;	
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Please enter the kilometers : \n");
	scanf("%d",&iValue);
	
	iRet = TouristBill(iValue);
	
	printf("The estimated rent for %d kilometers is : %d\n",iValue,iRet);
	
	return 0;
}

// Time complexity : NA 