///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and accept one character and check whether
//                      that character is present in the input string or not.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		ChkChar
//	Input :				string
//	Output :			boolean
// 	Description :		Accepts input string and one character and checks whether that character is present in the string or not.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				24/05/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    return (*str != '\0');
    
    /*if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }*/
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string