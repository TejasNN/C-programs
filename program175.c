// display count of small and capital characters

#include<stdio.h>

void Frequency(char *str)
{
	int iCnt = 0, iSmall = 0, iCapital = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iSmall++;
		}
		else if((*str >= 'A') && (*str <= 'Z'))
		{
			iCapital++;
		}
		str++;
	}
	printf("Small case characters count is : %d\n",iSmall);
	printf("Capital case characters is : %d\n",iCapital);
}

int main()
{
	char Arr[20];
	
	printf("Enter string :\n");
	scanf("%[^'\n']s",Arr);
	
	Frequency(Arr);
	
	return 0;
}