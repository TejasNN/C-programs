// Accept N elements and display Maximum and Minimum number from those elements by using only one function

#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int Arr[], int iLength)
{
	int iMin = Arr[0];
	int iMax = Arr[0];
	int iCount = 0;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] < iMin)
		{
			iMin = Arr[iCount];
		}
		if(Arr[iCount] > iMax)
		{
			iMax = Arr[iCount];
		}
	}
	printf("Largest element is : %d\n",iMax);
	printf("Smallest element is : %d\n",iMin);
}

int main()
{
	int iSize;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the number of elements: \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate the memory.\n");
		return -1;
	}
	
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
	
	MaximumMinimum(ptr,iSize);
	
	free(ptr);

	return 0;
}