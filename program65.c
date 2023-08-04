// Accept number from user and check whether the number is palindrome or not

#include<stdio.h>
#include<stdbool.h>

bool Checkpallindrome(int iNo)
{
	int iDigit = 0;
	int iReverse = 0;
	int iTemp = iNo;			// this variable is needed as a backup because iNo during the execution of our program will be 0 by the end of while loop
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iReverse = (iReverse * 10) + iDigit;
		iNo = iNo / 10;
	}
	
	if(iReverse == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = Checkpallindrome(iValue);
	
	if(bRet == true)
	{
		printf("%d is a pallindrome number. \n",iValue);
	}
	else
	{
		printf("%d is not a pallindrome number. \n",iValue);
	}
	
	return 0;
}