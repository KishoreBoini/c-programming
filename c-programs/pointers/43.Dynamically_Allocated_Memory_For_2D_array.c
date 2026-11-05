#include<stdio.h>
#include<stdlib.h>

int** Dynamic2DArray(int r,int c)
{
	int **ptr;
	ptr=malloc(r*sizeof(int));
	for(int i=0;i<r;i++)
		ptr[i]=malloc(c*sizeof(int));
	if(ptr==NULL)
		return NULL;
return ptr;
}

int main()
{
	int row,col,**ret,k=0;
	printf("Enter the dimentions of Matrix : ");
	scanf("%d%d",&row,&col);
	ret=Dynamic2DArray(row,col);
	if(ret==NULL)
	{
		printf("Memory Not Allocated !!!\n");
		return -1;
	}
	printf("Enter the Elements of Matrix : ");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&ret[i][j]);
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",ret[i][j]);
		}
		printf("\n");
	}
		for(int j=0;j<col;j++)
		{
			free(ret[j]);
		}
	free(ret);
	ret=NULL;
return 0;
}
