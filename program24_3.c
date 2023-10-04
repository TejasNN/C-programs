///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and accept one character. Return the first occurance of that character.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		FirstChar
//	Input :				string
//	Output :			integer
// 	Description :		Accepts input as string and a character and return the first occurance of that character in the string.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				24/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while((*str != '\0') && (*str != ch))
    {
        iCnt++;
        str++;
    }
        
    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string