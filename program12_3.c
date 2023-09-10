///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and return difference between largest and smallest number.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Difference
//	Input :				integer
//	Output :			integer
// 	Description :		Returns difference between Lagest and smallest number from N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				13/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
	int iCnt = 0, iMax = 0, iMin = Arr[iLength - 1];
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
		else if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	return iMax - iMin;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0, iCount = 0, iRet = 0;
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
	
	iRet = Difference(ptr,iSize);
	
	printf("Difference is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements