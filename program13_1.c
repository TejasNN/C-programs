/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Design application for hotel. According to the management team of hotel, they are giving discount on 
//						total bill amount of customer. If the bill amount is less than 500 then	there is no discount. If the 
//						bill amount is less than 1500 and more than 500 then give 10% discount, and if the bill amount is
//						more than 1500 then give 15% discount. Our application should accept total bill amount and depends 
//						on the discount policy we have to return the amount after discount.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CalculateBill
//	Input :				integer
//	Output :			float
// 	Description :		Returns discounted value for total bill input.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				17/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculateBill(int iAmount)
{
	float fDiscount = 0.0f;
	
	if(iAmount < 500)
	{
		fDiscount = iAmount;
	}
	else if((iAmount < 1500) && (iAmount > 500))
	{
		fDiscount = (iAmount - (iAmount / 10));
	}
	else if(iAmount > 1500)
	{
		fDiscount = (iAmount - (iAmount / 15));
	}
	return ((float)fDiscount);
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	float fRet = 0.0f;
	
	printf("Enter total bill amount : \n");
	scanf("%d",&iValue);
	
	fRet = CalculateBill(iValue);
	
	printf("The discounted bill is : %f\n",fRet);
	
	return 0;
}

// Time complexity : NA 