// Accept N elements and display Maximum and Minimum number from those elements

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
	int iMin = Arr[0], iCount = 0;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] < iMin)
		{
			iMin = Arr[iCount];
		}
	}
	return iMin;
}

int Maximum(int Arr[], int iLength)
{
	int iMax = Arr[0], iCount = 0;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] > iMax)
		{
			iMax = Arr[iCount];
		}
	}
	return iMax;
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
	
	iRet = Maximum(ptr,iSize);
	
	printf("Largest number is : %d\n",iRet);
	
	iRet = Minimum(ptr,iSize);
	
	printf("Smallest number is : %d\n",iRet);
	
	free(ptr);

	return 0;
}