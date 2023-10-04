/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and accept one character. Return the frequency of that character.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountChar
//	Input :				string
//	Output :			integer
// 	Description :		Accepts input as string and a character and return the count of that character in the string.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				24/05/2023
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int cValue = 0, iRet = 0;
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character to find : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is : %d\n",iRet);
    
    return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string