#include<stdio.h>		// Input Output
#include<stdlib.h>		// For memory management

int main()				// Entry point function
{
	int iSize = 0;		// To store the size of array
	int *ptr = NULL;	// To store address of array
	int iCnt = 0;		// Loop counter
	
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
	
	printf("Elements of the array are : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("%d\n",ptr[iCnt]);
	}
	
	return 0;			// Return success to OS
}