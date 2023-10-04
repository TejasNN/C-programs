////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and toggle the case.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		StrtoggleX
//	Input :				string
//	Output :			void
// 	Description :		Accepts input string and toggles the case.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				23/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrtoggleX(char *str)
{
    int iGap = 'a' - 'A';

    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - iGap;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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
	
	StrtoggleX(Arr);

    printf("The modified string is : %s\n",Arr);

	return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string