///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept number of rows and columns from the user and display below pattern. 
//
//  Input : 
//	iRows :	3	iCol : 4	             
//			
//	Output :	*	#	*	#
//				*	#	*	#
//				*	#	*	#
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

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if(j % 2 == 0)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	
}
/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows : \n");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns : \n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}

// Time complexity : O(N^2) 
// where N is the number of rows and columns