# Employee List Functions

**C source:** `c-programs/data_structures/Employee_list_Functions.c`

## C Source Code

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Employee_list_Functions.h"

void sortFirstName()
 {
         struct emp *prev,*current,*next;
	 int swapped;   
	 if(pHead==NULL || pHead->nxt==NULL)
		 return;
	 do
	 {
		 swapped=0;
		 prev=NULL;
		 current=pHead;
		 while(current->nxt!=NULL)
		 {
			 next=current->nxt;
			 if(strcmp(current->dptr->first_name,next->dptr->first_name)>0)
			 {
				 if(prev==NULL)
				 {
					 pHead=next;
				 }
				 else
					 prev->nxt=next;

				 current->nxt=next->nxt;
				 next->nxt=current;

				 prev=next;
				 swapped=1;
				 current=prev->nxt;


			 }
			 else
			 {
				 prev=current;
				 current=current->nxt;

			 }
			 
		 }

	 }while(swapped);
 }

void sortLastName()
{
	if(pHead==NULL || pHead->nxt==NULL)
		return;
	struct emp *current,*next,*prev;
	int swapped;
	do
	{
		current=pHead;
		prev=NULL;
		swapped=0;
		while(current->nxt!=NULL)
		{
			next=current->nxt;
			if(strcmp(current->dptr->last_name,next->dptr->last_name)>0)
			{

				if(prev==NULL)
				{
					pHead=next;
				}
				else
					prev->nxt=next;

			current->nxt=next->nxt;
			next->nxt=current;
			
			prev=next;
			swapped=1;			
			current=prev->nxt;
			}
			else
			{
				prev=current;
				current=current->nxt;
			}
		}
	}while(swapped);
}
void sortStateName()
{
	if(pHead==NULL || pHead->nxt==NULL)
		return;
	struct emp *current, *prev, *next;
	int swapped;
	do
	{
		swapped=0;
		current=pHead;
		prev=NULL;
		while(current->nxt!=NULL)
		{
			next=current->nxt;
			if(strcmp(current->aptr->state,next->aptr->state)>0)
			{
				if(prev==NULL)
				{
					pHead=next;
				}
				else
					prev->nxt=next;
			current->nxt=next->nxt;
			next->nxt=current;

			current=next->nxt;
			prev=next;
			swapped=1;
			}
			else
			{
				prev=current;
				current=current->nxt;
			}
		}
	}while(swapped);
}
void sortEmployeeNumber()
{
	if(pHead==NULL || pHead->nxt==NULL)
		return;
	struct emp *current,*prev,*next;
	int swapped;
	do
	{
		current=pHead;
		prev=NULL;
		swapped=0;
		while(current->nxt!=NULL)
		{
			next=current->nxt;
			if(current->dptr->emp_num>next->dptr->emp_num)
			{
				if(prev==NULL)
				{
					pHead=next;
				}
				else
					prev->nxt=next;

				current->nxt=next->nxt;
				next->nxt=current;

				current=next->nxt;
				prev=next;
				swapped=1;
			}
			else
			{
				prev=current;
				current=current->nxt;
			}
		}
	}while(swapped);
}

void DeleteFirstName(char key[])
{
	struct emp *pTrave,*prev,*tmp;
	int flag=0;
	pTrave=pHead;
	prev=NULL;
	if(pHead==NULL)
		return;
	if(pHead->nxt==NULL)	
	{
		if(strcmp(pHead->dptr->first_name,key)==0)
		{
			if(pHead->dptr)
			{
				free(pHead->dptr);
				pHead->dptr=NULL;
			}
			if(pHead->aptr)
			{
				free(pHead->aptr);
				pHead->aptr=NULL;
			}
			free(pHead);
			pHead=NULL;
			printf("Deleted\n");
		}
		else
			printf("Not found\n");
		return;
	}

	while(pTrave!=NULL)
	{
		if(strcmp(pTrave->dptr->first_name,key)==0)
		{			
			if(prev==NULL)
			{
				pHead=pTrave->nxt;
				tmp=pTrave;
				pTrave=pHead;
			}
			else
			{
				prev->nxt=pTrave->nxt;
				tmp=pTrave;
				pTrave=prev->nxt;
			}
			if(tmp->dptr)
			{
				free(tmp->dptr);
				tmp->dptr=NULL;
			}
			if(tmp->aptr)
			{
				free(tmp->aptr);
				tmp->aptr=NULL;
			}
			free(tmp);
			tmp=NULL;

			flag=1;
		}
		else
		{
			prev=pTrave;
			pTrave=pTrave->nxt;

		}
	}
	if(flag)
		printf("Deleted\n");
	else
		printf("Not found\n");

}

int DeleteLastName(char key[])
{
	if(key==NULL || pHead==NULL)
	{
		printf("key or Head node not found");
		return 0;
	}
	struct emp *pTrave,*prev,*tmp;
	pTrave=pHead;
	prev=NULL;
	while(pTrave!=NULL)
	{
		if(pTrave->dptr!=NULL && pTrave->dptr->last_name!=NULL)
		{

			if(strcmp(pTrave->dptr->last_name,key)==0)
			{
				if(prev==NULL)
				{
					pHead=pTrave->nxt;
					tmp=pTrave;
					pTrave=pHead;
				}
				else
				{
					prev->nxt=pTrave->nxt;
					tmp=pTrave;
					pTrave=prev->nxt;
				}
				if(tmp->dptr){free(tmp->dptr);tmp->dptr=NULL;}
				if(tmp->aptr){free(tmp->aptr);tmp->aptr=NULL;}
				free(tmp);tmp=NULL;
				return 1;
			}
			else
			{
				prev=pTrave;
				pTrave=pTrave->nxt;
			}
		}
	}
return 0;

}

void DeleteEmpNum(int key)
{
	if(pHead==NULL)
	{
		printf("Head node not found or Empty list\n");
		return ;
	}
	struct emp *pTrave,*prev,*tmp;
	int flag=0;
	prev=NULL;
	pTrave=pHead;
	while(pTrave!=NULL)
	{
		if(pTrave->dptr)
		{

			if(pTrave->dptr->emp_num == key)
			{
				if(prev==NULL)
				{
					pHead=pTrave->nxt;
					tmp=pTrave;
				}
				else
				{
					prev->nxt=pTrave->nxt;
					tmp=pTrave;
				}
				if(tmp)
				{
					if(tmp->dptr){free(tmp->dptr);tmp->dptr=NULL;}
					if(tmp->aptr){free(tmp->aptr);tmp->aptr=NULL;}
					free(tmp);tmp=NULL;
					printf("Node deleted\n");
				}
				if(prev==NULL)
					pTrave=pHead;
				else
					pTrave=prev->nxt;
				
				flag=1;
			}
			else
			{
				prev=pTrave;
				pTrave=pTrave->nxt;
			}
			
		}
		else
		{
				prev=pTrave;
				pTrave=pTrave->nxt;
			
		}
	}
	if(flag==0)
		printf("Match not found\n");

}

void DeleteCity(char key[])
{
	if(pHead == NULL || key == NULL)
	{
		printf("Empty List or Key not found \n");
		return;
	}
	struct emp *pTrave,*prev,*tmp;
	int flag=0;
	pTrave=pHead;
	prev=NULL;
	while(pTrave!=NULL)
	{
		if(pTrave->aptr!=NULL && pTrave->aptr->city!=NULL)
		{
	
				if(strcmp(pTrave->aptr->city,key)==0)
				{
					if(prev==NULL)
					{
							pHead=pTrave->nxt;
						tmp=pTrave;
		
					}
					else
					{
						prev->nxt=pTrave->nxt;
						tmp=pTrave;
					}
					if(tmp->aptr){free(tmp->aptr);tmp->aptr=NULL;}
					if(tmp->dptr){free(tmp->dptr);tmp->dptr=NULL;}
					free(tmp);tmp=NULL;
	
					if(prev==NULL)
						pTrave=pHead;
					else
						pTrave=prev->nxt;
					flag=1;
				}
				else
				{
					prev=pTrave;
					pTrave=pTrave->nxt;
				}
		}
		else
		{
			printf("Address Not for a node Critical Warning!!\n");
			prev=pTrave;
			pTrave=pTrave->nxt;

		}
	}
	if(flag==0)
		printf("Match not found\n");
	else
		printf("Deleted Matched Nodes\n");
	
}

struct emp* EvenList()
{
	if(pHead==NULL)
		return NULL;
	struct emp *pTrave,*eNew,*eTrave,*eHead;	
	eHead=NULL;
	pTrave=pHead;
	while(pTrave!=NULL)
	{

		if(pTrave->dptr->emp_num % 2==0)
		{
			eNew=malloc(sizeof(struct emp));
			if(!eNew)
			{
				printf("Memory not allocatde for New node\n");
				myfree(eHead);
				return NULL;
			}
			eNew->aptr=malloc(sizeof(struct add));
			if(!eNew->aptr)
			{
				printf("Memory not allocatde for address node\n");
				myfree(eHead);
				return NULL;
			}
			eNew->dptr=malloc(sizeof(struct det));
			if(!eNew->dptr)
			{
				printf("Memory not allocatde for personal details node\n");
				myfree(eHead);
				return NULL;
			}

			eNew->aptr->house_num=pTrave->aptr->house_num;
			strcpy(eNew->aptr->street,pTrave->aptr->street);
			strcpy(eNew->aptr->city,pTrave->aptr->city);

			strcpy(eNew->dptr->first_name,pTrave->dptr->first_name);
			strcpy(eNew->dptr->last_name,pTrave->dptr->last_name);
			eNew->dptr->emp_num=pTrave->dptr->emp_num;

			eNew->nxt=NULL;
			
			if(eHead==NULL)
			{
				eHead=eNew;
			}
			else
			{
				eTrave->nxt=eNew;								
			}
			eTrave=eNew;
		}
		pTrave=pTrave->nxt;
	}
	printf("\n\nNew Memory Allocated for a Deep copy of Even Nodes of Original List \n\n");
return eHead;
}

void myfree(struct emp *eHead)
{
	if (eHead==NULL)
		return;
	struct emp *pTrave,*dTrave;
	pTrave=eHead;
		while(pTrave!=NULL)
		{
			dTrave=pTrave->nxt;

				free(pTrave->aptr);
				pTrave->aptr=NULL;
				free(pTrave->dptr);
				pTrave->dptr=NULL;
				free(pTrave);
				pTrave=dTrave;
		}
return ;

}

struct emp* OddList()
{
	if(pHead==NULL)
		return NULL;
	struct emp *pTrave,*oNew,*oTrave,*oHead;	
	oHead=NULL;
	pTrave=pHead;
	while(pTrave!=NULL)
	{

		if(pTrave->dptr->emp_num % 2!=0)
		{
			oNew=malloc(sizeof(struct emp));
			if(!oNew)
			{
				printf("Memory not allocatde for New node\n");
				myfree(oHead);
				return NULL;
			}
			oNew->aptr=malloc(sizeof(struct add));
			if(!oNew->aptr)
			{
				printf("Memory not allocatde for address node\n");
				myfree(oHead);
				return NULL;
			}
			oNew->dptr=malloc(sizeof(struct det));
			if(!oNew->dptr)
			{
				printf("Memory not allocatde for personal details node\n");
				myfree(oHead);
				return NULL;
			}

			oNew->aptr->house_num=pTrave->aptr->house_num;
			strcpy(oNew->aptr->street,pTrave->aptr->street);
			strcpy(oNew->aptr->city,pTrave->aptr->city);

			strcpy(oNew->dptr->first_name,pTrave->dptr->first_name);
			strcpy(oNew->dptr->last_name,pTrave->dptr->last_name);
			oNew->dptr->emp_num=pTrave->dptr->emp_num;

			oNew->nxt=NULL;
			
			if(oHead==NULL)
			{
				oHead=oNew;
			}
			else
			{
				oTrave->nxt=oNew;								
			}
			oTrave=oNew;
		}
		pTrave=pTrave->nxt;
	}
	printf("\n\nNew Memory Allocated for a Deep copy of Odd Nodes of Original List \n\n");
return oHead;
}
```
