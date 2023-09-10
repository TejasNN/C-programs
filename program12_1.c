//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and return largest number.                
//																			                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Maximum
//	Input :				integer
//	Output :			integer
// 	Description :		Returns maximum number from N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				13/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
	int iCnt = 0, iMax = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
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
	
	iRet = Maximum(ptr,iSize);
	
	printf("Largest number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements