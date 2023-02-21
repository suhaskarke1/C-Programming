#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // Step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // Step2: Initialise the node
    newn->data = No;
    newn->next = NULL;

    // Step3: Check Linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}
void InsertLast(PPNODE First, int No)
{
    // Step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // Step2: Initialise the node
    newn->data = No;
    newn->next = NULL;
    PNODE temp=*First;
    // Step3: Check Linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If linked list contains atleast one node
    {
       while(temp->next != NULL)
	   {
		   temp=temp->next;
	   }
	   temp->next=newn;
	   
    }
}

void Display(PNODE First)
{
    printf("Elements of Linked List are : \n");
    while(First != NULL)
    {
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
	int iCnt=0;
	
	while(First !=NULL)
	{
		iCnt++;
		First=First->next;
	}
	return iCnt;
}
int main()
{
    PNODE Head = NULL;
    int iRet=0;
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    InsertLast(&Head,111);
	InsertLast(&Head,121);
	InsertLast(&Head,151);
	
    Display(Head);
    iRet=Count(Head);
	printf("Node in Link List Are : %d \n",iRet);
    return 0;
}
