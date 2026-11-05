//Write recursive functions for the following operations on a linked list
//iv.Reverse the linked list.
  
#include<stdio.h>
#include<stdlib.h>

struct node {
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
		printf("Address %p|%d node's data = %d\n",(void*)pTrave,i,pTrave->data);
		i++;
		pTrave=pTrave->nxt;
	}
return;
}

void reverseListR(struct node *current,struct node *prev,struct node *next)
{
	if(current==NULL)
	{
		pHead=prev;
		return;
	}

	next=current->nxt;
	current->nxt=prev;
	prev=current;
	current=next;
	reverseListR(current,prev,next);
return;
}

int main()
{
	for(int i=1;i<100;i+=10)
	{
		createNode(i);
	}
	Display();
	reverseListR(pHead,NULL,NULL);
	Display();

return 0;
}
