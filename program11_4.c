///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and accept range and display all elements between that range.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Range
//	Input :				integer
//	Output :			void
// 	Description :		Display all elements between input range from N input numbers .  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				12/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
	int iCount = 0;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if((Arr[iCount] > iStart) && (Arr[iCount] < iEnd))
		{
			printf("%d\t",Arr[iCount]);
		}
	}
}
			
/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0;
	int iCnt = 0;
	int *ptr = NULL;
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iSize);
	
	printf("Enter the starting point : \n");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point : \n");
	scanf("%d",&iValue2);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements : \n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Range(ptr,iSize,iValue1,iValue2);
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements