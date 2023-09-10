///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and take another number as No and check whether NO is present or not.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Check
//	Input :				integer
//	Output :			boolean
// 	Description :		Cheks whether input number is present in N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				12/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength, int iNo)
{
	int iCount = 0;
	bool bFlag = false;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] == iNo)
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
	
	bRet = Check(ptr,iSize,iValue);
	
	if(bRet == true)
	{
		printf("Number is present\n");
	}
	else
	{
		printf("Number is not present\n");
	}
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements