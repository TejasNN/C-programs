// Accept N elements also accept another number from user and check whether if the input number is present or not // With flag

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
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

int main()
{
	int iSize;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;
	bool bRet = false;
	
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
	
	bRet = Search(ptr,iSize,iValue);
	
	if(bRet == true)
	{
		printf("%d is present in the array\n",iValue);
	}
	else
	{
		printf("%d is absent from the array\n",iValue);
	}
	
	free(ptr);

	return 0;
}