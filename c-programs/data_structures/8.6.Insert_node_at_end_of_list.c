//Write recursive functions for the following operations on a linked list.
//Insert a node at the end of the list

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

void InsertNodetoEnd(struct node *add,int val)
{
	if(add==NULL)
		return;

	if(add->nxt==NULL)
	{
		struct node *pNew;
		pNew=malloc(sizeof(struct node));

		pNew->data=val;
		pNew->nxt=NULL;
		add->nxt=pNew;
		return;
	}
	add=add->nxt;
	InsertNodetoEnd(add,val);

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

int main()
{
	createNode(10);
	createNode(40);
	createNode(90);
	createNode(80);
	createNode(70);
	createNode(50);
	Display();
	InsertNodetoEnd(pHead,75);
	Display();

return 0;
}
