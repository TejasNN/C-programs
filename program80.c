// Write a program to count odd numbers from input numbers

#include<stdio.h>		// Input Output
#include<stdlib.h>		// For memory management

int CountOdd(int Arr[], int iLength)
{
	int iOdd = 0;
	int iCount = 0;
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if((Arr[iCnt] % 2) != 0)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()				// Entry point function
{
	int iSize = 0;		// To store the size of array
	int *ptr = NULL;	// To store address of array
	int iCnt = 0;		// Loop counter
	int iRet = 0;
	
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
	iRet = CountOdd(ptr,iSize);	// Demo(400,4)
	printf("Odd elements are : %d\n", iRet);
	
	// Step 6 : Deallocate the memory of array
	free(ptr);
	
	return 0;			// Return success to OS
}