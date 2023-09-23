///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Accept division of students from user and depends on the division display exam timings. There are 
//						4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 
//						10:30 AM. (Application should be case insensitive.)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		DisplaySchedule
//	Input :				character
//	Output :			void
// 	Description :		display exam time for input as division.  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				21/05/2023
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
	if((chDiv == 'a') || (chDiv == 'A'))
	{
		printf("Your exam at 7 AM\n");
	}
	else if((chDiv == 'b') || (chDiv == 'B'))
	{
		printf("Your exam at 8:30 AM\n");
	}
	else if((chDiv == 'c') || (chDiv == 'C'))
	{
		printf("Your exam at 9:20 AM\n");
	}
	else if((chDiv == 'd') || (chDiv == 'D'))
	{
		printf("Your exam at 10:30 AM\n");
	}
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	char cValue = '\0';
	
	printf("Enter your division : \n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
}

// Time complexity : NA
// where N is the number of rows