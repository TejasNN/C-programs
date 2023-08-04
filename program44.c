// write a program to display numbers from 1 to input number in reverse order using while loop

#include<stdio.h>

void DisplayB(int iNo)
{
	int iCnt = 0;
	
	iCnt = iNo;
	
	while(iCnt >= 1)
	{
		printf("%d\t",iCnt);
		iCnt--;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	DisplayB(iValue);
	
	return 0;
}