// write a program to accept a string and display the string without special scanf which results in not able to take space as input 

#include<stdio.h>

int main()
{
	char Arr[20];
	int iCnt = 0;
	printf("Enter your name : \n");
	scanf("%s",Arr);
	
	printf("Your name is : %s\n",Arr);
	
	return 0;
}