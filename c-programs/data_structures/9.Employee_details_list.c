#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"Employee_list_Functions.h"

struct emp *pHead=NULL;

void createNode(int House_num,char Street[],char City[],char State[],char First_name[],char Last_name[],int Emp_num)
{
	struct emp *pNew,*pTrave;
	pTrave=pHead;
	pNew=malloc(sizeof(struct emp));
	pNew->aptr=malloc(sizeof(struct add));
	pNew->dptr=malloc(sizeof(struct det));
	if(!pNew)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		return;
	}
	if(!pNew->aptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	if(!pNew->dptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}

	if(pHead==NULL)
	{
		pHead=pNew;
		pHead->aptr->house_num=House_num;
		strcpy(pHead->aptr->street,Street);
		strcpy(pHead->aptr->city,City);
		strcpy(pHead->aptr->state,State);
		strcpy(pHead->dptr->first_name,First_name);
		strcpy(pHead->dptr->last_name,Last_name);
		pHead->dptr->emp_num=Emp_num;
		pHead->nxt=NULL;
		return;
	}
	pTrave=pHead;
	while(pTrave->nxt!=NULL)
	{

		pTrave=pTrave->nxt;
	}
	pTrave->nxt=pNew;
	pNew->aptr->house_num=House_num;
        strcpy(pNew->aptr->street,Street);
        strcpy(pNew->aptr->city,City);
        strcpy(pNew->aptr->state,State);
        strcpy(pNew->dptr->first_name,First_name);
        strcpy(pNew->dptr->last_name,Last_name);
        pNew->dptr->emp_num=Emp_num;
        pNew->nxt=NULL;

}


void Display()
{
	if(pHead==NULL)
	{
		printf("Empty list\n");
		return;
	}
	int i=0;
	struct emp *pTrave;
	pTrave=pHead;
	while(pTrave!=NULL)
	{
		printf("\n\n\n%d Node\n",i);
		printf("%p\n",(void*)pTrave);
		printf("=========\n Address \n=========\n");
		printf("House Number : %d\n",pTrave->aptr->house_num);
		printf("Street : %s\n",pTrave->aptr->street);
		printf("City : %s\n",pTrave->aptr->city);
		printf("State : %s\n",pTrave->aptr->state);
		printf("=========\n Details \n=========\n");
		printf("First Name : %s\n",pTrave->dptr->first_name);
		printf("Second Name : %s\n",pTrave->dptr->last_name);
		printf("Employee NUmber : ");
		printf("%d",pTrave->dptr->emp_num);
		printf("\n");
		pTrave=pTrave->nxt;
		i++;
	}
	printf("\n\n");

}

void DisplaytheAdd(struct emp *pTrave)
{
	printf("%p\n",(void*)pTrave);
	printf("=========\n Address \n=========\n");
	printf("House Number : %d\n",pTrave->aptr->house_num);
	printf("Street : %s\n",pTrave->aptr->street);
	printf("City : %s\n",pTrave->aptr->city);
	printf("State : %s\n",pTrave->aptr->state);
	printf("=========\n Details \n=========\n");
	printf("First Name : %s\n",pTrave->dptr->first_name);
	printf("Second Name : %s\n",pTrave->dptr->last_name);
	printf("Employee NUmber : ");
	printf("%d",pTrave->dptr->emp_num);
	printf("\n");

}


void addNodetoHead(int House_num,char Street[],char City[],char State[],char First_name[],char Last_name[],int Emp_num)
{
	struct emp *pNew;
	pNew=malloc(sizeof(struct emp));
	pNew->aptr=malloc(sizeof(struct add));
	pNew->dptr=malloc(sizeof(struct det));
	if(!pNew)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		return;
	}
	if(!pNew->aptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	if(!pNew->dptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	pNew->aptr->house_num=House_num;
        strcpy(pNew->aptr->street,Street);
        strcpy(pNew->aptr->city,City);
        strcpy(pNew->aptr->state,State);
        strcpy(pNew->dptr->first_name,First_name);
        strcpy(pNew->dptr->last_name,Last_name);
        pNew->dptr->emp_num=Emp_num;
	pNew->nxt=pHead;
	pHead=pNew;
}


void addNodeatEnd(int House_num,char Street[],char City[],char State[],char First_name[],char Last_name[],int Emp_num)
{
	
	struct emp *pNew,*pTrave;
	pNew=malloc(sizeof(struct emp));
	pNew->aptr=malloc(sizeof(struct add));
	pNew->dptr=malloc(sizeof(struct det));
	if(!pNew)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		return;
	}
	if(!pNew->aptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	if(!pNew->dptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	pTrave=pHead;
	if(pHead==NULL)
	{
		pNew->aptr->house_num=House_num;
        	strcpy(pNew->aptr->street,Street);
       	 	strcpy(pNew->aptr->city,City);
        	strcpy(pNew->aptr->state,State);
        	strcpy(pNew->dptr->first_name,First_name);
        	strcpy(pNew->dptr->last_name,Last_name);
        	pNew->dptr->emp_num=Emp_num;
		pHead=pNew;
		pNew->nxt=NULL;
		return;

	}
	while(pTrave->nxt!=NULL)
	{
		pTrave=pTrave->nxt;
	}
	pTrave->nxt=pNew;
	pNew->aptr->house_num=House_num;
        strcpy(pNew->aptr->street,Street);
        strcpy(pNew->aptr->city,City);
        strcpy(pNew->aptr->state,State);
        strcpy(pNew->dptr->first_name,First_name);
        strcpy(pNew->dptr->last_name,Last_name);
        pNew->dptr->emp_num=Emp_num;
	pNew->nxt=NULL;

}

void addNodeatPosition(int House_num,char Street[],char City[],char State[],char First_name[],char Last_name[],int Emp_num,int pos)
{
	int i=1;	
	struct emp *pNew,*pTrave;
	pTrave=pHead;
	
	pNew=malloc(sizeof(struct emp));
	pNew->aptr=malloc(sizeof(struct add));
	pNew->dptr=malloc(sizeof(struct det));
	if(!pNew)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		return;
	}
	if(!pNew->aptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	if(!pNew->dptr)
	{
		printf("No valid Memory allocated Failed Allocation\n");
		free(pNew);
		return;
	}
	if(pTrave==NULL)
		return;
	if(pos==1)
	{
		pNew->nxt=pTrave;
		pNew->aptr->house_num=House_num;
	        strcpy(pNew->aptr->street,Street);
	        strcpy(pNew->aptr->city,City);
      	  	strcpy(pNew->aptr->state,State);
        	strcpy(pNew->dptr->first_name,First_name);
       		strcpy(pNew->dptr->last_name,Last_name);
        	pNew->dptr->emp_num=Emp_num;
		pHead=pNew;
		return;

	}

	while(i<pos-1 && pTrave!=NULL)
	{
		pTrave=pTrave->nxt;
		i++;
	}
	pNew->aptr->house_num=House_num;
        strcpy(pNew->aptr->street,Street);
        strcpy(pNew->aptr->city,City);
        strcpy(pNew->aptr->state,State);
        strcpy(pNew->dptr->first_name,First_name);
        strcpy(pNew->dptr->last_name,Last_name);
        pNew->dptr->emp_num=Emp_num;
	pNew->nxt=pTrave->nxt;
	pTrave->nxt=pNew;

}

void DeleteNodeatHead()
{
	if (pHead==NULL)
		return;
	struct emp *store;
	store=pHead;
	pHead=pHead->nxt;
	free(store->aptr);
	free(store->dptr);
	free(store);
}

void DeletNodeatTail()
{
	if(pHead==NULL)
		return;
	if(pHead->nxt==NULL)
	{
		free(pHead->aptr);
		free(pHead->dptr);
		free(pHead);
		pHead=NULL;
		return;
	}
	struct emp *pTrave,*prev;
	pTrave=pHead;
	while(pTrave->nxt!=NULL)
	{
		prev=pTrave;
		pTrave=pTrave->nxt;
	}
	prev->nxt=NULL;
	free(pTrave->aptr);
	free(pTrave->dptr);
	free(pTrave);

}

void DeleteNodeatPosition(int pos)
{
	int i=1;
	struct emp *pTrave,*prev;
	prev=NULL;
	pTrave=pHead;
	if(pTrave==NULL)
		return;
	if(pos==1)
	{
		prev=pHead;
		pHead=pHead->nxt;
		free(prev);
		return;
	}

	while(i<pos-1 && pTrave!=NULL)
	{
		pTrave=pTrave->nxt;
		i++;
	}
	if(pTrave==NULL || pTrave->nxt==NULL)
		return;
	prev=pTrave->nxt;
	pTrave->nxt=prev->nxt;
	free(pTrave->dptr);
	free(pTrave->aptr);
	free(prev);
}

void searchNode(int pos)
{
	if(pHead==NULL)
	{
		printf("\n\nNo Nodes to search\n\n\n");
		return;
	}

	else if(pHead->nxt==NULL)
		printf("Only 1 node present");
	int i=1;
	struct emp *pTrave;
	pTrave=pHead;
	while(i<pos && pTrave!=NULL)
	{
		pTrave=pTrave->nxt;
		i++;
	}
	if(pTrave)
		DisplaytheAdd(pTrave);
	else
		printf("Not found!!\n");
}


void scan_data(int *House_num,char *Street,char *City,char *State,char *First_name,char *Last_name,int *Emp_num)
{
	printf("Address Details\n");
	printf("House No : ");
	scanf("%d",&*(House_num));
	printf("Street name : ");
	scanf("%s",&*(Street));
	printf("City : ");
	scanf("%s",&*(City));
	printf("State : ");
	scanf("%s",&*(State));
	printf("Personal Details\n");
	printf("First name : ");
	scanf("%s",&*(First_name));
	printf("Last name : ");
	scanf("%s",&*(Last_name));
	printf("Emplyee ID number : ");
	scanf("%d",&*(Emp_num));

}

void menu()
{
	int House_num;
	char Street[20];
	char City[20];
	char State[20];
	char First_name[20];
	char Last_name[20];
	int Emp_num;

	while(1)
	{
		int op;
		printf("1.Create Multiple Nodes\n2.Add a Node at the Head\n3.Add a Node at the Tail\n4.Add a Node at the Position\n5.Delete a Node at Head\n6.Delete a Node at Tail\n7.Delete a Node at Position\n8.Search a Node\n9.Display the linked list \n10.Sort\n11.Delete\n0.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				while(1)
				{
					char ch;
					printf("1.Add a New Node(n)\n2.stop and go to last menu(s)\nEnter your choice : ");
					scanf(" %c",&ch);
					if(ch=='n')
					{
						scan_data(&House_num,Street,City,State,First_name,Last_name,&Emp_num);
						createNode(House_num,Street,City,State,First_name,Last_name,Emp_num);
					}
					else if(ch=='s')
						break;
					else
						printf("Enter the valid input!!\n");
				}
				continue;
			case 2:
				scan_data(&House_num,Street,City,State,First_name,Last_name,&Emp_num);
				addNodetoHead(House_num,Street,City,State,First_name,Last_name,Emp_num);
				continue;
			case 3:
				scan_data(&House_num,Street,City,State,First_name,Last_name,&Emp_num);
				addNodeatEnd(House_num,Street,City,State,First_name,Last_name,Emp_num);
				continue;
			case 4:
				int a;
				printf("Enter the Node : ");
				scanf("%d",&a);
				scan_data(&House_num,Street,City,State,First_name,Last_name,&Emp_num);
				addNodeatPosition(House_num,Street,City,State,First_name,Last_name,Emp_num,a);
				continue;
			case 5:
				DeleteNodeatHead();
				continue;
			case 6:
				DeletNodeatTail();
				continue;
			case 7:
				int b;
				printf("Enter the node : ");
				scanf("%d",&b);
				DeleteNodeatPosition(b);
				continue;
			case 8:
				int c;
				printf("Enter the Node : ");
				scanf("%d",&c);
				searchNode(c);
				continue;
			case 9:
				Display();
				continue;
			case 10:
				sortMenu();
				continue;
			case 11:
				DeleteMenu();
				continue;
			case 12:				
				DeepCopyMenu();
				continue;
			case 0:
				printf("Operations Exited\n");
				break;
			case 100:
				system("clear");
				continue;

			default:
				printf("Invalid input!!\n");
				continue;
		}
		if(op==0)
			break;
	}

}

void sortMenu()
{

		while(1)
		{
			int select;
			printf("1.Sort by first name \n2.Sort by Last Name\n3.Sort by State\n4.Sort by empoyee nuber\n0.Exit\n");
			printf("Enter your choice\n");
			scanf(" %d",&select);
			switch(select)
			{
				case 1:
					sortFirstName();
					continue;
				case 2:
					sortLastName();
					continue;
				case 3:
					sortStateName();
					continue;
				case 4:
					sortEmployeeNumber();
					continue;
				case 0:
					break;
				case 100:
					Display();
					continue;
				default:
					printf("Enter the valid option!!!\n");
			}
			if(select==0)
				break;
		}
}


void DeleteMenu()
{
	while(1)
	{
		int choice;
		printf("1.Delete node by first name\n2.Delete node by last name\n3.Delete node by Employee number\n4.Delete node by city\n0.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	
				char key[10];
				printf("Enter the first name of the person you want to delete the node \n");
				scanf("%s",key);
				DeleteFirstName(key);
				continue;
			case 2:
				int r;
				char lkey[10];
				printf("Enter the last name of the person you want to delete the node \n");
				scanf("%s",lkey);
				r=DeleteLastName(lkey);
				if(r)
					printf("Deleted\n");
				else
					printf("Not found\n");
				continue;
			case 3:
				int ekey;
				printf("Enter the Employee number : ");
				scanf(" %d",&ekey);
				DeleteEmpNum( ekey);
				continue;
			case 4:
				char ckey[10];
				printf("Enter the city name you want to delete the node of :");
				scanf("%s",ckey);
				DeleteCity(ckey);
				continue;
			case 0:
				break;
			case 100:
				Display();
				continue;
			default:
				printf("Enter the valid option!!!\n");
		}
		if(choice==0)
			break;
	}
}

void DeepCopyMenu()
{
	int dint;
	struct emp *Head,*dHead;
	while(1)
	{
		printf("1.Even list\n2,Odd list\n3.Display The Copied List\n4.Delete the existing Deep copy\n0.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&dint);
		switch(dint)
		{
			case 1:
				Head=EvenList();
				continue;
			case 2:
				OddList();
				continue;
			case 3:
				dHead=Head;
				while(dHead!=NULL)
				{
					DisplaytheAdd(dHead);
					dHead=dHead->nxt;
				}
				continue;
			case 4:
				myfree(Head);
			case 0:
				break;
		}
		if(dint == 0)
			break;
	}
}

void main()
{
	menu();

}
