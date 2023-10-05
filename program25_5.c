///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept number of rows and columns from the user and display below pattern. 
//
//  Input : 
//	iRows :	5	iCol : 5	             
//			
//	Output :	1   2   3   4   5
//              1   2           5
//              1       3       5
//              1           4   5
//              1   2   3   4   5
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
// 	Date :				24/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("%d\t",j);
            }
            else if ((j == 1) || (j == iCol))
            {
                printf("%d\t",j);
            }
            else if((i == 1) || (i == iRow))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        printf("\n");
    }
}
/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter rows : \n");
    scanf("%d",&iValue1);

    printf("Enter columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

// Time complexity : O(N^2) 
// where N is the number of rows and columns