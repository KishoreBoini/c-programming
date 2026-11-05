#include<stdio.h>
#include <stdlib.h>

struct tree{
	int data;
	struct tree *right_child;
	struct tree *left_child;
	struct tree *parent_add;
};

struct tree *parent;

struct tree* Create_Binary_Tree(int num)
{

	struct tree *pNew,*pTrave;
	pNew=malloc(sizeof(struct tree));
	if(pNew==NULL)
	{
		printf("No valid Address assined! \n");
		return NULL;
	}

	if(parent==NULL)
	{
		parent=pNew;
		parent->data=num;
		parent->right_child=NULL;
		parent->left_child=NULL;
		parent->parent_add=parent;
		return parent;
	}
	pTrave=parent;
	if(num<pTrave->data)
	{
		while(pTrave->left_child!=NULL)
		{
			pTrave=pTrave->left_child;
		}
			pTrave->left_child=pNew;
			pNew->parent_add=pTrave;
			pNew->left_child=NULL;
			pNew->right_child=NULL;
			pNew->data=num;
	return parent;
	}
	else
	{
		while(pTrave->right_child!=NULL)
		{
			pTrave=pTrave->right_child;
		}
			pTrave->right_child=pNew;
			pNew->parent_add=pTrave;
			pNew->right_child=NULL;
			pNew->left_child=NULL;
			pNew->data=num;
	return parent;
	}

}

int main()
{
	Create_Binary_Tree(10);
	return 0;
}
