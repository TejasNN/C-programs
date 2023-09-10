///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and display summation of digits of each input number.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		DigitsSum
//	Input :				integer
//	Output :			void
// 	Description :		Display summation of digits of each N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				13/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
	int iCnt = 0, iDigits = 0, iSum = 0;  

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iSum = 0;
		while(Arr[iCnt] != 0)
		{
			iDigits = Arr[iCnt] % 10;
			iSum = iSum + iDigits;
			Arr[iCnt] = Arr[iCnt] / 10;
		}
		printf("%d\t",iSum);
	}	
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0, iCount = 0;
	int *ptr = NULL;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Please enter elements of array : \n");
	
	for(iCount = 0; iCount < iSize; iCount++)
	{
		scanf("%d",&ptr[iCount]);
	}
	
	DigitsSum(ptr,iSize);
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements