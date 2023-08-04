// PROBLEMS ON DIGITS
// Write a program to count how many times digit 8 is present in the input number with updator

#include<stdio.h>

int CountDigitFrequency(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if(iNo < 0)				//	Updator
	{
		iNo = -iNO;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 8)
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
	
	iRet = CountDigitFrequency(iValue);
	printf("Frequency of 8 is : %d\n",iRet);
	
	return 0;
}