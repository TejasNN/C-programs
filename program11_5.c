///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and return product of all odd elements.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Product
//	Input :				integer
//	Output :			integer
// 	Description :		Returns product of all odd elements from N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				12/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
	int iCount = 0;
	int iMult = 1;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if((Arr[iCount] % 2) != 0)
		{
			iMult = iMult * Arr[iCount];
		}
	}
	if(iMult == 1)
	{
		return 0;
	}
	else
	{
		return iMult;
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
	int iRet = 0;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iSize);
	
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
	
	iRet = Product(ptr,iSize);
	
	printf("Product is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements