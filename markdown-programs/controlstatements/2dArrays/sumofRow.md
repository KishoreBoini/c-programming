# sumofRow

**C source:** `c-programs/controlstatements/2dArrays/sumofRow.c`

```c
//Program for sumofRow.c
#include<stdio.h>

int main()
{
	int row=3,col=3;
	int  arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum[col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		sum[i]=0;

	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			sum[i]+=arr[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		printf("sum of %d row is %d\n",i+1,sum[i]);
	}
return 0;
}
```
