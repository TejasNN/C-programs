//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and count number of small characters.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		CountSmall
//	Input :				string
//	Output :			integer
// 	Description :		Returns count of small characters from input string.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				22/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           iCount++; 
        }
        str++;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];
    int iRet = 0;
	
	printf("Enter a string : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmall(Arr);

    printf("%d\n",iRet);

	return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string