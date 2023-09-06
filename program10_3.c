//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and check whether that number contains 11 in it or not.                
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Check
//	Input :				integer
//	Output :			boolean
// 	Description :		Checks whether input number is 11 or not.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				12/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
	int iCount = 0;
	bool bFlag = false;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] == 11)
		{
			bFlag = true;
			break;
		}
	}
	return bFlag;
}
			
/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0;
	int iCnt = 0;
	int *ptr = NULL;
	bool bRet = false;
	
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
	
	bRet = Check(ptr,iSize);
	
	if(bRet == true)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is absent\n");
	}
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements