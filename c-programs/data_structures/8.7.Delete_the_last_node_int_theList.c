//8. Write recursive functions for the follow=ing operations on a linked list.i
//(vii) Delete the last node from the list

#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *nxt;
};

struct node *pHead;

void createNode(int val)
{
	struct node *pNew,*pTrave;
	pNew=malloc(sizeof(struct node));
	if(pHead==NULL)
	{
		pHead=pNew;
		pHead->data=val;
		pHead->nxt=NULL;
		return;
	}
	pTrave=pHead;
	while(pTrave->nxt!=NULL)
	{
		pTrave=pTrave->nxt;
	}
	pNew->data=val;
	pNew->nxt=NULL;
	pTrave->nxt=pNew;
return;
}

void Display()
{

	printf("Dispaly\n");
	int i=1;
	struct node *pTrave;
	pTrave=pHead;
	while(pTrave!=NULL)
	{
		printf("%d node's data = %d\n",i,pTrave->data);
		i++;
		pTrave=pTrave->nxt;
	}
return;		
}

struct node* deleteLastNode(struct node* head)
{
    if(head == NULL) return NULL;

    if(head->nxt == NULL)
    {
        free(head);
        return NULL;   
    }

    head->nxt = deleteLastNode(head->nxt);
    return head;
}



int main()
{
	createNode(10);
	createNode(20);
	createNode(30);
	createNode(20);
	createNode(50);
	createNode(10);
	Display();
	pHead=deleteLastNode(pHead);
	Display();
return 0;
}
