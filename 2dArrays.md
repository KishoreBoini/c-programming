## Sumofrow

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

## Uppertriansum

```c
//Program for uppertriansum.c
#include<stdio.h>

int main(){
	//int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int a,b;
	printf("Enter the rows and columns for matrix : ");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	printf("Enter the elements of matrix :");
	for (int i=0; i<a; i++){
		for (int j=0; j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int sum=0;
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++){
			if (j>=i){
			printf("%d ",arr[i][j]);
		
			sum+=arr[i][j];
			}
			else{
				printf("  ");

			}
		}
		printf("\n");
	}
	//printf("\n");
	printf("%d\n",sum);

return 0;
}

```

## Multiply2Matrix

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

## Twoarraysequalornot

```c
//Program for twoarraysequalornot.c
#include<stdio.h>

int main()
{
	int flag=0;
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={0,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("not equal\n");
	else
		printf("equal\n");
}

```

## Add2Matrix

```c
//Program for add2matrix.c
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
			sum[i][j]=0;
			
		}
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			sum[i][j]+=arr1[i][j]+arr2[i][j];
			
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
			
		}
	printf("\n");
	}
return 0;
}
	

```

## Lowertriansum

```c
//Program for lowertriansum.c
#include<stdio.h>

int main(){
	int sum=0;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<=i; j++)
		{
			sum+=(arr[i][j]);

		}
	}
	printf("%d\n",sum);

return 0;
}

```

## Printreverseorder

```c
//Program for printreverseorder.c
#include<stdio.h>

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	for(int i=9;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
printf("\n");

}

```

## Sub2Matrix

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

## Sumofcolumn

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

