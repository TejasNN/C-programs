//////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement : Write a program which accept three numbers and print its multiplication               
//																			                                        
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		Multiply
//	Input :				integer
//	Output :			print statement
// 	Description :		Return multiplication of three numbers while handling the condition if number is 0  
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				04/05/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{	
	int iMult = 1;
	if((iNo1 > 0) && (iNo2 > 0) && (iNo3 > 0))
	{
		iMult = iNo1 * iNo2 * iNo3;
	}
	else if(iNo1 == 0 && (iNo2 > 0) && (iNo3 == 0) )
	{
		iMult = iNo2;
	}
	else if((iNo1 > 0) && (iNo2 == 0) && (iNo3 == 0))
	{
		iMult = iNo1;
	}
	else if((iNo1 == 0) && (iNo2 == 0) && (iNo3 > 0))
	{
		iMult = iNo3;
	}
	else if((iNo1 > 0) && (iNo2 > 0) && (iNo3 == 0))
	{
		iMult = iNo1 * iNo2;
	}
	else if((iNo1 == 0) && (iNo2 > 0) && (iNo3 > 0))
	{
		iMult = iNo2 * iNo3;
	}
	else if((iNo1 > 0) && (iNo2 == 0) && (iNo3 > 0))
	{
		iMult = iNo1 * iNo3;
	}
	else 
	{
		iMult = 0;
	}
	return iMult;
	
}
	

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
	
	printf("Please enter three numbers : \n");
	scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
	
	iRet = Multiply(iValue1,iValue2,iValue3);
	
	printf("%d",iRet);
	
	return 0;
}

// Time complexity : NA
