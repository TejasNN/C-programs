// write a program to accept a string and display the string with special scanf

#include<stdio.h>

int main()
{
	char Arr[40];
	int iCnt = 0;
	printf("Enter your name : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("Your name is : %s\n",Arr);
	
	return 0;
}