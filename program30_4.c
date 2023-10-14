////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																			                                           
//	Problem statement :	Write a program which returns largest element from singly linear linked list.
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
//	Function name :		Maximum
//	Input :				Address
//	Output :			integer
// 	Description :		Returns Largest of all the elements in the LinkedList. 
// 	Author :			Tejas Nandakumar Nagvekar
// 	Date :				15/06/2023
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE Head)
{
    int iMax = Head->data;

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

/////////////////////////////////////////////////////////////////////////////////
//	Entry point function													   //
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);    
    InsertFirst(&First, 110);

    iRet = Maximum(First);

    printf("%d\n",iRet);

    return 0;
    
}
// Time complexity : O(N)
// Where N is the number of nodes in the LinkedList