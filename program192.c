// concating two input strings with user input of how many characters to concat to second input string

#include<stdio.h>

void strncatX(char *src, char *dest, int iLength)
{
	// 1. Travel till end of dest
	while(*dest != '\0')
	{
		dest++;
	}
	
	// 2. Copy data from src to dest
	while((*src != '\0') && (iLength != 0))
	{
		*dest = *src;
		src++;
		dest++;
		
		iLength--;
	}
	
	// 3. Write '\0' at the end of dest
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20] = "Demo";
	int iNo = 0;
	printf("Enter string :\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the number of letters that you want to concat : \n");
	scanf("%d",&iNo);
	
	strncatX(Arr,Brr,iNo);
	
	printf("String after copy is : %s\n",Brr);
	
	return 0;
}