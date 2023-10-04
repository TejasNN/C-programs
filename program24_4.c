///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and accept one character. Return the last occurance of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		LastChar
//	Input :				string
//	Output :			integer
// 	Description :		Accepts input as string and a character and return the last occurance of that character in the string.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				24/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character to find : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string