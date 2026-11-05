#include<stdio.h>
#include<stdlib.h>

int* AddReturn()
{
	int *ptr;
	ptr=malloc(sizeof(int));
	if(ptr==NULL)
	{
		return NULL;
	}
	*ptr=5;
	*ptr=*ptr+10;
return ptr;
}

int main()
{
	int *ptr;
	ptr=AddReturn();
	if(ptr==NULL)
	{
		printf("Memory Error Memory not Allocated\n");

	}
	else
		printf("Number = %d\n",*ptr);
	free(ptr);
	ptr=NULL;
return 0;
}
