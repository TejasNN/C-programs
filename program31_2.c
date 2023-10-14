////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program which displays all elements which are prime from singly linear linked list.
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
//	Function name :		DisplayPrime
//	Input :				Address
//	Output :			integer
// 	Description :		Displays prime elements in the LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DisplayPrime(PNODE Head)
{
    
    int iCnt = 0, iPrime = 0;

    for(iCnt = 2; iCnt <= (Head->data / 2); iCnt++)
    {
        if((Head->data % iCnt) == 0)
        {
            break;
        }
        else
        {
            iPrime = Head->data;
            break;
        }
    }
    return iPrime;    
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);    
    InsertFirst(&First, 11);

    while(First != NULL)
    {
        iRet = DisplayPrime(First);
        if(iRet != 0)
        {
            printf("%d\t",iRet);
        }
        First = First->next;
    }

    return 0;
    
}
// Time complexity : O(N/2)
// Where N is the number of nodes in the LinkedList