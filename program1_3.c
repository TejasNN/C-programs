// Write a program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
	int i = 0;
	i = 5;
	for(i=5;i>0;i--)
	{
		printf("%d",i);
	}
}

int main()
{
	Display();
	
	return 0;
}