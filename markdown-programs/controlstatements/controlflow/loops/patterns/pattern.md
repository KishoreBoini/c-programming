# Pattern

**C source:** `c-programs/controlstatements/controlflow/loops/patterns/pattern.c`

## C Source Code

```c
//Program for pattern.c
#include<stdio.h>

int main(){
	int row,column;
	printf("Enter the rows and columns : ");
	scanf("%d%d",&row,&column);
	//square pattern
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//right angled triangle
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j<=i)
			{
			printf("* ");
			}
		}
		printf("\n");
	}
	//reverse right angled triangle
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j>=i)
			{
			printf("* ");
			}
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j<i)
			{
				printf("  ");
			}
		}
		for(int j=0;j<column;j++)
		{
			if(j>=i)
			{
				printf("* ");
			}

		}
		printf("\n");
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(j<=column-i-1)
			{
				printf("* ");
			}
		}
		for(int j=0;j<column;j++)
		{
			if(j>column-i+column)
			{
				printf(" ");
			}
		}
		printf("\n");
	}

return 0;
}
```
