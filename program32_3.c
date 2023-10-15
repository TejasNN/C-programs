////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program which displays product of all digits of all elements of singly linear linked list.
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
//	Function name :		DisplayProduct
//	Input :				Address
//	Output :			void
// 	Description :		Displays product of all digits of all elements in the LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayProduct(PNODE Head)
{
    while(Head != NULL)
    {
        int iDigit = 0, iMult = 1, iTemp = 0;

        iTemp = Head->data;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 0)
            {
                iMult = iMult + iDigit;
            }
            else
            {
                iMult = iMult * iDigit;
            }
            
            iTemp = iTemp / 10;
        }
        printf("%d\t",iMult);

        Head = Head->next;
    } 
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);    
    InsertFirst(&First, 11);

    DisplayProduct(First);

    return 0;
    
}
// Time complexity : O(N^2)
// Where N is the number of nodes in the LinkedList and N is the number of digits in a number