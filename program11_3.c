///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and take another number as No and return index of last occurance of that number.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		LastOcc
//	Input :				integer
//	Output :			integer
// 	Description :		Returns last occurance of input number from N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				12/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
	int iCount = 0, iOcc = 0;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] == iNo)
		{
			iOcc = iCount;
			continue;
		}
	}
	if(iOcc == 0)
	{
		return -1;
	}
	else
	{
		return iOcc;
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
	int iValue = 0;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iSize);
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
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
	
	iRet = LastOcc(ptr,iSize,iValue);
	
	if(iRet == -1)
	{
		printf("There is no such number. \n");
	}
	else
	{
		printf("The last occurance of number is %d \n",iRet);
	}
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements