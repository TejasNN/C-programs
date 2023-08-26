///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept number from user and display its factors in decreasing order  
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		FactRev
//	Input :				integer
//	Output :			void
// 	Description :		Returns the factors of input number in decreasing order
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
/////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\t",iCnt);
		}
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
	
	FactRev(iValue);
	
	return 0;
}

// Time complexity : O(N/2)
// Where N is the input (Natural number)