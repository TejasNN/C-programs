///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept N numbers from user and display all such numbers which contains 3 digits in it.                
//																			                                        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Digits
//	Input :				integer
//	Output :			void
// 	Description :		Display all such numbers which contains 3 digits in it from N input numbers.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				13/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
	int iCnt = 0, iDigits = 0, iFrequency = 0, iTemp = 0;   
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iTemp = Arr[iCnt];
		iFrequency = 0;
		
		while(iTemp != 0)
		{
			iDigits = iTemp % 10;
			iFrequency++;
			iTemp = iTemp / 10;
		}
		if(iFrequency == 3)
		{
			printf("%d\t",Arr[iCnt]);
		}
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
	
	Digits(ptr,iSize);
	
	free(ptr);
	
	return 0;
}

// Time complexity : O(N) 
// where N is the number of array elements