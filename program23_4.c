///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and display only digits from that string.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		DisplayDigit
//	Input :				string
//	Output :			void
// 	Description :		Accepts input string and displays only numbers from it.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				23/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    char Brr[20];
    char *dest = NULL;
    dest = Brr;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            *dest = *str;
            printf("%c",*dest);
        }
        dest++;
        str++;
    }
    *dest = '\0';
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];

	printf("Enter a string : \n");
	scanf("%[^'\n']s",Arr);
	
	DisplayDigit(Arr);

	return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string