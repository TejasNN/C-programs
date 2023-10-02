//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept character from user. If it is capital then display all the characters from the input characters
//                      till Z. If input character is small then print all the characters in reverse order till a. In other
//                      cases return directly.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Display
//	Input :				character
//	Output :			void
// 	Description :		Displays alphabets from input number from reverse and forward order untill a and z respectively.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				22/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
	char  cChar = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cChar = ch; cChar <= 'Z'; cChar++)
        {
            printf("%c\t",cChar);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cChar = ch; cChar >= 'a'; cChar--)
        {
            printf("%c\t",cChar);
        }
    }
    else
    {
        return;
    }
    
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue = '\0';
	
	printf("Enter a character : \n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}

// Time complexity : O(N)
// where N is the number of alphabets from a/z to the input character