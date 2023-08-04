// copy capital case letter and small case letter by toggling from input string to other input string

#include<stdio.h>

void strcpytoggleX(char *src, char *dest)
{
	int gap = 'a' - 'A';
	
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + gap;
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src - gap;
		}
		else
		{
			*desc = *src;
		}
		src++;			
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",Arr);
	
	strcpytoggleX(Arr,Brr);
	
	printf("String after copy is : %s\n",Brr);
	
	return 0;
}