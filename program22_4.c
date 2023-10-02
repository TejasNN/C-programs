////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and check whether it contains vowels in it or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		ChkVowel
//	Input :				string
//	Output :			boolean
// 	Description :		Returns true if vowel present in input string.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				22/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];
    bool fRet = false;
	
	printf("Enter a string : \n");
	scanf("%[^'\n']s",Arr);
	
	fRet = ChkVowel(Arr);

    if(fRet == true)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

	return 0;
}

// Time complexity : O(N)   (optimsized)
// where N is the number of characters in input string