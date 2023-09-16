///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Design application for income tax department to calculate tax amount. According to the income tax 
//						department there is no income tax for income less than 5 lakhs. If the income is between 5 to 10 lakhs
//						then there will be 10% tax. If the income is between 10 to 20 lakhs, then there will be 20% tax.
//						And for more than 20 lakhs, there will be 30% tax. We have to accept gross income from user and return tax.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define NO_TAX 0
#define MIN_INCOME1 500000
#define MAX_INCOME1 1000000
#define TAX_RATE1 0.1
#define MIN_INCOME2 1000000
#define MAX_INCOME2 2000000
#define TAX_RATE2 0.2
#define MIN_INCOME3 2000000
#define TAX_RATE3 0.3

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		IncomeTax
//	Input :				integer
//	Output :			float
// 	Description :		Returns tax amount for gross income input.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				17/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float IncomeTax(int iAmount)
{
	float fTax = 0.0f;
	
	if(iAmount < MIN_INCOME1)
	{
		return NO_TAX;
	}
	if((iAmount > MIN_INCOME1) && (iAmount > MAX_INCOME1))
	{
		fTax = fTax + (MIN_INCOME1 * TAX_RATE1);
	}
	if((iAmount > MIN_INCOME1) && (iAmount < MAX_INCOME1))
	{
		fTax = fTax + ((iAmount - MIN_INCOME1) * TAX_RATE1);
	}
	if((iAmount > MIN_INCOME2) && (iAmount < MAX_INCOME2))
	{
		fTax = fTax + ((iAmount - MIN_INCOME2) * TAX_RATE2);
	}
	if((iAmount > MIN_INCOME2) && (iAmount > MAX_INCOME2))
	{
		fTax = fTax + (MIN_INCOME2 * TAX_RATE2);
	}
	if(iAmount > MIN_INCOME3)
	{
		fTax = fTax + ((iAmount - MIN_INCOME3) * TAX_RATE3);
	}
	return fTax;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	float fRet = 0.0f;
	
	printf("Enter gross amount : \n");
	scanf("%d",&iValue);
	
	fRet = IncomeTax(iValue);
	
	printf("The tax is : %f\n",fRet);
	
	return 0;
}

// Time complexity : NA 