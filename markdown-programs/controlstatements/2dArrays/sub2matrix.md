# Sub2Matrix

**C source:** `c-programs/controlstatements/2dArrays/sub2matrix.c`

## C Source Code

```c
//Program for sub2matrix.c
#include<stdio.h>

int main()
{
	int row=3,col=3;
	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int arr2[3][3]={{22,12,33},{76,89,45},{12,56,79}};
	int sum[3][3],sub[3][3];

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			sub[i][j]=0;
		}
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			sub[i][j]+=arr1[i][j]-arr2[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d",sub[i][j]);
		}
	printf("\n");
	}
	
return 0;
}
```
