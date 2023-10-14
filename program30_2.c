////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program which search for last occurance of perticular element from singly linear linkedlist.
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
//	Function name :		Count
//	Input :				Address
//	Output :			integer
// 	Description :		Returns total number of nodes present in LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name :		SearchLastOcc
//	Input :				Address, integer
//	Output :			integer
// 	Description :		Returns last occurance of the input number in LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE Head, int iNo)
{
    int iCnt = 0, iLength = 0, iLast = 0;

    iLength = Count(Head);

    for(iCnt = 1; iCnt <= iLength; iCnt++)
    {
        if(Head->data == iNo)
        {
            iLast = iCnt;
        }
        Head = Head->next;
    }
    return iLast;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);    
    InsertFirst(&First, 10);

    Display(First);

    iRet = SearchLastOcc(First,30);

    printf("%d\n",iRet);

    return 0;
    
}
// Time complexity : O(N)
// Where N is the number of nodes in the LinkedList