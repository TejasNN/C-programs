////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program which displays all palindrome elements of singly linear linked list.
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
//	Function name :		Palindrome
//	Input :				Address
//	Output :			void
// 	Description :		Displays palindrome elements in the LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Palindrome(PNODE Head)
{
    while(Head != NULL)
    {
        int iDigit = 0, iTemp = 0, iTempX = 0, iReverse = 0;

        iTempX = Head->data;
        iTemp = Head->data;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = (iReverse * 10) + iDigit;
            iTemp = iTemp / 10;
        }

        if(iReverse == iTempX)
        {
            printf("%d\t",iTempX);
        }
        Head = Head->next;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);    
    InsertFirst(&First, 11);

    Palindrome(First);

    return 0;
    
}
// Time complexity : O(N^2)
// Where N is the number of nodes in the LinkedList and N is the number of digits in a number