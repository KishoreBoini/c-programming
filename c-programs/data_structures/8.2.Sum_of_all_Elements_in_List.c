//Write recursive functions for the following operations on a linked list.
//ii.Find sum of all elements in the list

#include<stdio.h>
#include<stdlib.h>

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

void SumofElements(struct node *add,int sum)
{
	if(add==NULL)
	{
		printf("Sum of all the Elments in the list is %d\n",sum);
		return;
	}

	sum+=add->data;
	add=add->nxt;
	SumofElements(add,sum);
}

int main()
{
	int sum=0;
	for(int i=0;i<100;i+=10)
	{
		createNode(i);
	}
	SumofElements(pHead,sum);
return 0;
}
