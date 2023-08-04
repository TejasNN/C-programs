// PROBLEMS ON DIGITS
// Write a program to find the frequency of a input digit present in the input number

#include<stdio.h>

int CountDigitFrequency(int iNo, int iSearch)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if((iSearch < 0) || (iSearch > 9))				//	filter
	{
		printf("Enter the digit in range 0 to 9\n ");
		return 0;
	}
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == iSearch)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue1);
	
	printf("Enter the digit (0 to 9)\n");
	scanf("%d",&iValue2);
	
	iRet = CountDigitFrequency(iValue1,iValue2);
	
	printf("Frequency of %d in %d : %d \n",iValue2,iValue1,iRet);
	
	return 0;
}
