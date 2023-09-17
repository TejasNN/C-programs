///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept number of rows and columns from the user and display below pattern. 
//
//  Input : 
//	iRows :	3	iCol : 5	             
//			
//	Output :	A	A	A	A	A	
//				B	B	B	B	B	
//				C	C	C	C	C
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
	char ch = 'A';
	
	for(i = 1, ch = 'A'; i <= iRow; i++,ch++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("%c\t",ch);
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