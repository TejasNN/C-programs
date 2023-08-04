// PROBLEMS ON DIGITS
// Write a program to accept number from user and count even digits in the number

#include<stdio.h>

int CountEvenDigits(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;			// Updator
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountEvenDigits(iValue);
	
	printf("Frequency of even digits in %d is %d \n",iValue,iRet);
	
	return 0;
}
