///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept number of rows and columns from the user and display below pattern. 
//
//  Input : 
//	iRows :	4	iCol : 4	             
//			
//	Output :	1	2	3	4	
//					2	3	4	
//						3	4
//							4
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
// 	Date :				17/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0, k = 0;
	
	if( iRow != iCol)
	{
		printf("Invalid input\n");
		return;
	}
	
	for(i = iRow; i >= 1; i--)
	{
		for(j = iCol, k = 1; j >= 1 ; j--, k++)
		{
			if(i >= j)
			{
				printf("%d\t",k);
			}
			else
			{
				printf(" \t");
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
// where N is the number of rows