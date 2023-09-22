///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept number of rows and columns from the user and display below pattern. 
//
//  Input : 
//	iRows :	5	iCol : 5	             
//			
//	Output :	a 	b 	c 	d 	e		
//				1	2	3	4	5
//				a 	b 	c 	d 	e
//				1	2	3	4	5
//				a 	b 	c 	d 	e
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
	char ch = 'a';
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
		{
			if((i % 2) == 0)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("%c\t",ch);
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