///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and reverse that string in place.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		StrRevX
//	Input :				string
//	Output :			integer
// 	Description :		Accepts input as string and a character and reverse that string in place.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				24/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = start;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("The modified string is : %s\n",Arr);

    return 0;
}

// Time complexity : O(2N)
// where N is the number of characters in input string