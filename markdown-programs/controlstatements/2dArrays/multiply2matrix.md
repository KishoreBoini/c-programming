# multiply2matrix

**C source:** `c-programs/controlstatements/2dArrays/multiply2matrix.c`

```c
//Program for multiply2matrix.c
#include<stdio.h>

int main()
{	
	int row=3,col=3,pro[row][col];
	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	int arr2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			pro[i][j]=0;
		}
		
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			for(int k=0;k<row;k++)
			{
				pro[i][j]+=arr1[i][k]*arr2[k][j];
			}

		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",pro[i][j]);
		}
		printf("\n");
	}
}
```
