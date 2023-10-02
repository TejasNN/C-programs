////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program to accept a string from user and return the difference between frequency of small characters
//                      and capital characters.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Difference
//	Input :				string
//	Output :			integer
// 	Description :		Returns difference between small characters and capital characters of input string.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				22/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmall = 0, iCapital = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           iSmall++; 
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        str++;
    }
    return iSmall - iCapital;
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
	
	iRet = Difference(Arr);

    printf("%d\n",iRet);

	return 0;
}

// Time complexity : O(N)
// where N is the number of characters in input string