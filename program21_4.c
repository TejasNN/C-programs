//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept character from user and check whether it is special symbol or not.(!,@,#,$,%,^,&,*)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Display
//	Input :				character
//	Output :			boolean
// 	Description :		Returns true if input character is a special character.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				22/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Display(char ch)
{
	bool bFlag = false;

    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        bFlag = true;   
    }
    return bFlag;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue = '\0';
    bool bRet = false;
	
	printf("Enter a character : \n");
	scanf("%c",&cValue);
	
	bRet = Display(cValue);

    if(bRet == true)
    {
        printf("It is a special character\n");
    }
	else
    {
        printf("It is not a special character\n");
    }

	return 0;
}

// Time complexity : NA
// where N is the number of alphabets