//Write a function to create a copy of a single linked list.
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
	while(pTrave->nxt!=0)
	{
		pTrave=pTrave->nxt;
	}
	pNew->data=val;
	pNew->nxt=NULL;
	pTrave->nxt=pNew;
return;
}

struct node* copy()
{
	struct node *copyHead=NULL,*pTrave,*copyNew,*attach;
	pTrave=pHead;
	while(pTrave!=NULL)
	{
		copyNew=malloc(sizeof(struct node));
		if(copyHead==NULL)
		{
			copyHead=copyNew;
			copyHead->data=pTrave->data;
			copyHead->nxt=NULL;
			attach=copyHead;
		}
		else
		{
			copyNew->data=pTrave->data;
			attach->nxt=copyNew;
			attach=attach->nxt;
		}
		pTrave=pTrave->nxt;
	}
return copyHead;
}
void display(struct node* add)
{
	int i=1;
	while(add!=NULL)
	{
		printf("%d node %d\n",i,add->data);
		i++;
		add=add->nxt;
	}
return;	
}

int main()
{
	struct node *res;
	createNode(10);
	createNode(20);
	createNode(30);
	createNode(40);
	createNode(50);
	createNode(60);
	createNode(70);
	res=copy();
	display(res);

return 0;
}
