// replace small case letter to capital letter in input string

#include<stdio.h>

void Strtoggle(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		else if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",Arr);
	
	Strtoggle(Arr);
	
	printf("String after editing is : %s\n",Arr);
	
	return 0;
}