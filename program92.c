// Accept N elements also accept another number from user and return last occurance of that number // With MACRO decoration i.e #define

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
	int iCount = 0;
	int iPos = ERR_NOTFOUND;
	
	for(iCount = 0; iCount < iLength; iCount++)
	{
		if(Arr[iCount] == iNo)
		{
			iPos = iCount;
		}
	}
	return iPos;
}

int main()
{
	int iSize;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	
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
	
	printf("Enter the element that you want to search : \n");
	scanf("%d",&iValue);
	
	printf("Elements of the array are : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("%d\n",ptr[iCnt]);
	}
	
	iRet = SearchLastOccurance(ptr,iSize,iValue);
	
	if(iRet == ERR_NOTFOUND)
	{
		printf("There is no such element\n");
	}
	else
	{
		printf("%d occured at index %d\n",iValue,iRet);
	}
	
	free(ptr);

	return 0;
}