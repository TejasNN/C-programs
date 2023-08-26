//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accepts total marks and obtained marks from user and calculate percentage.              
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Percentage
//	Input :				integer
//	Output :			float
// 	Description :		Percentage calculator  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
	float iDiv = 0.0;
	
	if(iNo1 < 0)
	{
		printf("Error : Invalid input.\n");
		printf("Note : Please enter a positive number\n");
	}
	
	iDiv = (((float)iNo2 / iNo1) * 100);
	return iDiv;
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0, iValue2 = 0;
	float fRet = 0.0;
	
	printf("Please enter total marks : \n");
	scanf("%d",&iValue1);
	
	printf("Please enter obtained marks : \n");
	scanf("%d",&iValue2);
	
	fRet = Percentage(iValue1,iValue2);
	
	printf("%f%%",fRet);
	
	return 0;
}

// Time complexity : NA
