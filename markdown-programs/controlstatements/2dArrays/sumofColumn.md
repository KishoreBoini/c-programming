# Sumofcolumn

**C source:** `c-programs/controlstatements/2dArrays/sumofColumn.c`

## C Source Code

```c
//Program for sumofColumn.c
#include<stdio.h>

void addSumofcolumn( int r, int c,int arr[r][c] );

int main()
{
	int rows,columns;
	printf("Enter the rows : columns :");
	scanf("%d%d",&rows,&columns);
	int arr[rows][columns];//={{1,2,3},{4,5,6},{7,8,9}};
	printf("Enter the matrix elements :(Give space after each element ...) ");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
			
	}

	addSumofcolumn(rows,columns,arr);	
/*
	int sum1=0,sum2=0,sum3=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j==0)
			{
				sum1+=arr[i][j];
			}
			if(j==1)
			{
				sum2+=arr[i][j];
			}
			if(j==2)
			{
				sum3+=arr[i][j];
			}
		}
			
	}
	printf(" sum of 1st column=%d\n sum of 2nd column=%d\n sum of 3rd column=%d\n",sum1,sum2,sum3);
*/
return 0;
}
void addSumofcolumn( int r, int c,int arr[r][c] )
{
	int funarr[c];
	for(int i=0;i<c;i++)
		funarr[i]=0;

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			funarr[j]+=arr[i][j];			
		}
			
	
	}
	printf("The sum of columns in the matrix :\n");
	for(int i=0;i<3;i++)
	{
		printf("%d\n",funarr[i]);
	}	
	
}
```
