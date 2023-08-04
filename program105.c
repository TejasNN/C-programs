// Write a program to print below pattern
//	Input : 7
//	Output :	a	1	b	2	c	3	d	4	e	5	f	6	g	7

//	Input : 3
//	Output :	a	1	b	2	c	3		

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char Ch = 'a';
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%c\t%d\t",Ch,iCnt);
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