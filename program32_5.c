////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program which displays largest digits of all elements of singly linear linked list.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		InsertFirst
//	Input :				Address, integer
//	Output :			void
// 	Description :		Inserts node at the first position of linked list. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		DisplayLarge
//	Input :				Address
//	Output :			void
// 	Description :		Displays Largest digits of all elements in the LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayLarge(PNODE Head)
{
    while(Head != NULL)
    {
        int iDigit = 0, iTemp = Head->data, iMax = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iTemp = iTemp / 10;
        }
        printf("%d\t",iMax);
        Head = Head->next;
    }   
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);    
    InsertFirst(&First, 11);

    DisplayLarge(First);

    return 0;
    
}
// Time complexity : O(N^2)
// Where N is the number of nodes in the LinkedList and N is the number of digits in a number