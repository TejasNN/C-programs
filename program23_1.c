////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and convert it into lower case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		StrlwrX
//	Input :				string
//	Output :			void
// 	Description :		Converts capital characters from input string to lower case characters.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				23/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrlwrX(char *str)
{
    int iGap = 'a' - 'A';

    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + iGap;
        }
        else
        {
            *str = *str;
        }
        str++;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];

	printf("Enter a string : \n");
	scanf("%[^'\n']s",Arr);
	
	StrlwrX(Arr);

    printf("The modified string is : %s\n",Arr);

	return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string