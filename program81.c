// Write a program to find the average of input numbers

#include<stdio.h>		// Input Output
#include<stdlib.h>		// For memory management

float Average(int Arr[], int iLength)
{
	int iSum = 0;
	int iCount = 0;
	for(iCount = 0; iCount < iLength; iCount++)
	{
			iSum = iSum + Arr[iCount];
	}
	return ((float)iSum / (float)iLength);
}

int main()				// Entry point function
{
	int iSize = 0;		// To store the size of array
	int *ptr = NULL;	// To store address of array
	int iCnt = 0;		// Loop counter
	float fRet = 0.0f;
	
	// Step 1 :  Accept the number of elements from the user
	printf("Enter number of elements : \n");
	scanf("%d",&iSize);
	
	// Step 2: Allocate memory dynamically
	ptr = (int *)malloc(iSize * sizeof(int));
	
	// Step 3: Accept the values from user
	printf("Enter the elements : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	// Step 4 : Pass the array to the function
	fRet = Average(ptr,iSize);	// Demo(400,4)
	printf("Average is : %f\n", fRet);
	
	// Step 6 : Deallocate the memory of array
	free(ptr);
	
	return 0;			// Return success to OS
}