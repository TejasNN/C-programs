// concating two input strings with space between them

#include<stdio.h>

void strcatX(char *src, char *dest)
{
	// 1. Travel till end of dest
	while(*dest != '\0')
	{
		dest++;
	}
	
	*dest = ' ';
	dest++;
	
	// 2. Copy data from src to dest
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	
	// 3. Write '\0' at the end of dest
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20] = "Demo";
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",Arr);
	
	strcatX(Arr,Brr);
	
	printf("String after copy is : %s\n",Brr);
	
	return 0;
}