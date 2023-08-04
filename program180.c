// replace capital case letter to small letter in input string

#include<stdio.h>

void StruprX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",Arr);
	
	StruprX(Arr);
	
	printf("String after editing is : %s\n",Arr);
	
	return 0;
}