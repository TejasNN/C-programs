// Write a program to print below pattern
//	Input : 7
//	Output :	A	B	C	D	E	F	G

//	Input : 3
//	Output :	A	B	C			

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char Ch = 'A';
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%c\t",Ch);
		Ch++;
	}
	printf("\n");
}

int main()
{
	int iFrequency = 0;
	
	printf("Enter frequency : \n");
	scanf("%d",&iFrequency);
	
	Display(iFrequency);

	return 0;
}