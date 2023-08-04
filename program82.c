#include<stdio.h>
#include<stdlib.h>

int Fun(int Arr[], int iLength)
{
	// Logic
}

int main()
{
	int iSize;
	int *ptr = NULL;
	int iCnt = 0;
	
	
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
	
	Fun(ptr,iSize);
	
	printf("Maximum number is : %d\n",iRet);
	
	free(ptr);

	return 0;
}